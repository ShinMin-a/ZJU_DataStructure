Polynomial PolyAdd(Polynomial P1, Polynomial P2){
	Polynomial front, rear, temp;
	int sum;
	rear = (Polynomial) malloc(sizeof(struct PolyNode));
	front = rear;/*油front记录结果多项式链表头结点*/
	while(P1 && P2) /*当两个多项式都有非零项待处理时*/
		switch(Compare(P1->expon, P2->exponP){
		case 1:
			Attach(P1->coef, P1->expon, &rear);
			P1=P1->link;
			break;
		case -1:
			Attach(P2->coef, P2->expon, &rear);
			P2=P2->link;
			break;
		case 0:
			sum = P1->coef + P2->coef;
			if(sum) Attach(sum, P1->expon, &rear);
			P1 = P1->link;
			P2 = P2->link;
			break;
			}

}
