#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)


struct oneLinkList {
	struct oneLinkList* next;
	int value;
};

struct twoLinkList {
	struct twoLinkList* next;
	struct twoLinkList* prev;
	int value;
};

struct oneLinkListStrings {
	struct oneLinkListStrings* next;
	char* string;
};

struct oneLinkList* CreateRandomOneLinkList(int count);
void PrintOneLinkList(struct oneLinkList* list);
void FreeOneLinkList(struct oneLinkList* list);
struct oneLinkList* UnionOneLinkLists(struct oneLinkList* firstList, struct oneLinkList* secondList);
struct oneLinkList* CloneOneLinkList(struct oneLinkList* resultList, struct oneLinkList* baseList);
struct oneLinkList* IntersectOneLinkLists(struct oneLinkList* firstList, struct oneLinkList* secondList);
struct oneLinkList* SubstractOneLinkLists(struct oneLinkList* firstList, struct oneLinkList* secondList);
struct oneLinkList* ReverseOneLinkList(struct oneLinkList* list);

struct twoLinkList* CreateRandomTwoLinkList(int count);
void PrintTwoLinkList(struct twoLinkList* list);
void FreeTwoLinkList(struct twoLinkList* list);
struct twoLinkList* UnionTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList);
struct twoLinkList* CloneTwoLinkList(struct twoLinkList* resultList, struct twoLinkList* baseList);
struct twoLinkList* IntersectTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList);
struct twoLinkList* SubstractTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList);
struct twoLinkList* ReverseTwoLinkList(struct twoLinkList* list);
struct twoLinkList* SelectSortTwoLinkList(struct twoLinkList* list);
struct twoLinkList* InsertSortTwoLinkList(struct twoLinkList* list);

struct twoLinkList* CreateRandomCircleTwoLinkList(int count);
void PrintCircleTwoLinkList(struct twoLinkList* list);
void FreeCircleTwoLinkList(struct twoLinkList* list);
struct twoLinkList* UnionCircleTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList);
struct twoLinkList* CloneCircleTwoLinkLists(struct twoLinkList* resultList, struct twoLinkList* baseList);
struct twoLinkList* IntersectCircleTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* seconfList);
struct twoLinkList* SubstractCircleTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList);
struct twoLinkList* ReverseCircleTwoLinkList(struct twoLinkList* list);
struct twoLinkList* SelectSortCircleTwoLinkList(struct twoLinkList* list);
struct twoLinkList* InsertSortCircleTwoLinkList(struct twoLinkList* list);

struct oneLinkListStrings* ReadFileToStringLinkList();
void PrintLinkListStrings(struct oneLinkListStrings* linkStrings);
void FreeLinkListStrings(struct oneLinkListStrings* linkStrings);

int main() {
	srand(time(NULL));

#pragma region OneLink lists
	//struct oneLinkList* firstOneList = CreateRandomOneLinkList(5);
	//printf("First list: ");
	//PrintOneLinkList(firstOneList);
	//struct oneLinkList* secondOneList = CreateRandomOneLinkList(5);
	//printf("Second list: ");
	//PrintOneLinkList(secondOneList);

	//struct oneLinkList* unionOneLists = UnionOneLinkLists(firstOneList, secondOneList);
	//printf("Union lists: ");
	//PrintOneLinkList(unionOneLists);
	//struct oneLinkList* intersectedOneLists = IntersectOneLinkLists(firstOneList, secondOneList);
	//printf("Intersection lists: ");
	//PrintOneLinkList(intersectedOneLists);
	//struct oneLinkList* substractedOneLists = SubstractOneLinkLists(firstOneList, secondOneList);
	//printf("Substraction lists: ");
	//PrintOneLinkList(substractedOneLists);
	//struct oneLinkList* reversedFirstOneList = ReverseOneLinkList(firstOneList);
	//printf("Reversed first list: ");
	//PrintOneLinkList(reversedFirstOneList);
	//FreeOneLinkList(reversedFirstOneList);

	//FreeOneLinkList(firstOneList);
	//FreeOneLinkList(secondOneList);
	//FreeOneLinkList(unionOneLists);
	//FreeOneLinkList(intersectedOneLists);
	//FreeOneLinkList(substractedOneLists);
	//FreeOneLinkList(reversedFirstOneList);
#pragma endregion

#pragma region TwoLink lists
	//struct twoLinkList* firstTwoList = CreateRandomTwoLinkList(5);
	//printf("first twolink list: ");
	//PrintTwoLinkList(firstTwoList);
	//struct twoLinkList* secondTwoList = CreateRandomTwoLinkList(5);
	//printf("second twolink list: ");
	//PrintTwoLinkList(secondTwoList);

	//struct twoLinkList* unionedTwoLists = UnionTwoLinkLists(firstTwoList, secondTwoList);
	//printf("unioned twolink lists: ");
	//PrintTwoLinkList(unionedTwoLists);
	//struct twoLinkList* intersectedTwoLists = IntersectTwoLinkLists(firstTwoList, secondTwoList);
	//printf("intersected twolink lists: ");
	//PrintTwoLinkList(intersectedTwoLists);
	//struct twoLinkList* substractedTwoLists = SubstractTwoLinkLists(firstTwoList, secondTwoList);
	//printf("substracted twolink lists: ");
	//PrintTwoLinkList(substractedTwoLists);
	//struct twoLinkList* reversedFirstTwoList = ReverseTwoLinkList(firstTwoList);
	//printf("reversed firsttwolist: ");
	//PrintTwoLinkList(reversedFirstTwoList);
	//printf("Select sorted reversedFirstTwoList: ");
	//reversedFirstTwoList = SelectSortTwoLinkList(reversedFirstTwoList);
	//PrintTwoLinkList(reversedFirstTwoList);
	//printf("Insect sorted secondTwoList: ");
	//secondTwoList = InsertSortTwoLinkList(secondTwoList);
	//PrintTwoLinkList(secondTwoList);

	////FreeTwoLinkList(firstTwoList);
	//FreeTwoLinkList(secondTwoList);
	//FreeTwoLinkList(unionedTwoLists);
	//FreeTwoLinkList(intersectedTwoLists);
	//FreeTwoLinkList(substractedTwoLists);
	//FreeTwoLinkList(reversedFirstTwoList);
#pragma endregion

#pragma region CircleTwoLink lists
	//struct twoLinkList* firstCircleList = CreateRandomCircleTwoLinkList(5);
	//printf("FirstCircleList: ");
	//PrintCircleTwoLinkList(firstCircleList);
	//struct twoLinkList* secondCircleList = CreateRandomCircleTwoLinkList(5);
	//printf("SecondCircleList: ");
	//PrintCircleTwoLinkList(secondCircleList);

	//struct twoLinkList* unionedCircleLists = UnionCircleTwoLinkLists(firstCircleList, secondCircleList);
	//printf("Unioned circle lists: ");
	//PrintCircleTwoLinkList(unionedCircleLists);
	//struct twoLinkList* intersectedCircleLists = IntersectCircleTwoLinkLists(firstCircleList, secondCircleList);
	//printf("Intersected circle lists: ");
	//PrintCircleTwoLinkList(intersectedCircleLists);
	//struct twoLinkList* substractedCircleLists = SubstractCircleTwoLinkLists(firstCircleList, secondCircleList);
	//printf("Substracted circle lists: ");
	//PrintCircleTwoLinkList(substractedCircleLists);
	//struct twoLinkList* reversedFirstCircleList = ReverseCircleTwoLinkList(firstCircleList);
	//printf("Reversed firstCircleList: ");
	//PrintCircleTwoLinkList(reversedFirstCircleList);
	//reversedFirstCircleList = SelectSortCircleTwoLinkList(reversedFirstCircleList);
	//printf("Select sorted reversedFirstCircleList: ");
	//PrintCircleTwoLinkList(reversedFirstCircleList);
	//secondCircleList = InsertSortCircleTwoLinkList(secondCircleList);
	//printf("Insert sorted secondCircleList: ");
	//PrintCircleTwoLinkList(secondCircleList);

	////FreeCircleTwoLinkList(firstCircleList);
	//FreeCircleTwoLinkList(secondCircleList);
	//FreeCircleTwoLinkList(unionedCircleLists);
	//FreeCircleTwoLinkList(intersectedCircleLists);
	//FreeCircleTwoLinkList(substractedCircleLists);
	//FreeCircleTwoLinkList(reversedFirstCircleList);
#pragma endregion

#pragma region Read files to LinkList
	struct oneLinkListStrings* linkStrings = ReadFileToStringLinkList();
	PrintLinkListStrings(linkStrings);
	FreeLinkListStrings(linkStrings);

#pragma endregion
}


struct oneLinkList* UnionOneLinkLists(struct oneLinkList* firstList, struct oneLinkList* secondList) {
	struct oneLinkList* resultList = NULL;

	if (firstList == NULL && secondList == NULL) return NULL;
	if (firstList == NULL)
		return CloneOneLinkList(resultList, secondList);
	if (secondList == NULL)
		return CloneOneLinkList(resultList, firstList);
	resultList = CloneOneLinkList(resultList, firstList);
	resultList = CloneOneLinkList(resultList, secondList);

	return resultList;
}

// Clone list without double elements
struct oneLinkList* CloneOneLinkList(struct oneLinkList* resultList, struct oneLinkList* baseList) {
	struct oneLinkList* p, * r, * node;
	bool flag;
	for (p = baseList; p != NULL; p = p->next) {
		flag = false;
		for (r = resultList; r != NULL; r = r->next) {
			if (p->value == r->value) {
				flag = true;
				break;
			}
		}
		if (flag) continue;
		node = calloc(1, sizeof(struct oneLinkList));
		node->value = p->value;
		node->next = resultList;
		resultList = node;
	}
	return resultList;
}

struct oneLinkList* IntersectOneLinkLists(struct oneLinkList* firstList, struct oneLinkList* secondList) {
	struct oneLinkList* fp, * sp, * node, * resultList = NULL, * r;
	bool flag, rFlag;

	for (fp = firstList; fp != NULL; fp = fp->next) {
		flag = false;
		rFlag = true;
		for (sp = secondList; sp != NULL; sp = sp->next)
			if (fp->value == sp->value) {
				flag = true;
				break;
			}
		if (flag) {
			for (r = resultList; r != NULL; r = r->next)
				if (r->value == fp->value) {
					rFlag = false;
					break;
				}
			if (rFlag) {
				node = calloc(1, sizeof(struct oneLinkList));
				node->value = fp->value;
				node->next = resultList;
				resultList = node;
			}
		}
	}
	return resultList;
}

struct oneLinkList* SubstractOneLinkLists(struct oneLinkList* firstList, struct oneLinkList* secondList) {
	struct oneLinkList* fp, * sp, * node, * resultList = NULL;
	bool flag;
	for (fp = firstList; fp != NULL; fp = fp->next) {
		flag = false;
		for (sp = secondList; sp != NULL; sp = sp->next)
			if (fp->value == sp->value) {
				flag = true;
				break;
			}
		if (flag) continue;
		node = calloc(1, sizeof(struct oneLinkList));
		node->value = fp->value;
		node->next = resultList;
		resultList = node;
	}
	return resultList;
}

struct oneLinkList* ReverseOneLinkList(struct oneLinkList* list) {
	struct oneLinkList* first, * second, * temp;
	if (list == NULL) return NULL;
	if (list->next == NULL) return list;
	first = list;
	second = first->next;
	first->next = NULL;
	while (second != NULL) {
		temp = second->next;
		second->next = first;
		first = second;
		second = temp;
	}
	return first;
}

struct oneLinkList* CreateRandomOneLinkList(int count) {
	struct oneLinkList* ph = NULL, * node;
	if (count < 1) return NULL;
	for (int i = 0; i < count; i++) {
		node = calloc(1, sizeof(struct oneLinkList));
		node->value = rand() % 10;
		node->next = ph;
		ph = node;
	}
	return ph;
}

void PrintOneLinkList(struct oneLinkList* list) {
	struct oneLinkList* p;
	if (list != NULL)
		for (p = list; p != NULL; p = p->next)
			printf("%d ", p->value);
	printf("\n");
}

void FreeOneLinkList(struct oneLinkList* list) {
	struct oneLinkList* p, * temp;
	for (p = list; p != NULL;) {
		temp = p->next;
		free(p);
		p = temp;
	}
}


struct twoLinkList* ReverseTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* first, * second, * temp;
	if (list == NULL) return NULL;
	if (list->next == NULL) return list;
	first = list;
	second = first->next;
	first->next = NULL;
	first->prev = second;

	while (second != NULL) {
		temp = second->next;
		second->next = first;
		second->prev = temp;
		first = second;
		second = temp;
	}
	return first;
}

struct twoLinkList* UnionTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList) {
	struct twoLinkList* resultList = NULL;

	if (firstList == NULL && secondList == NULL) return NULL;
	if (firstList == NULL)
		return CloneTwoLinkList(resultList, secondList);
	if (secondList == NULL)
		return CloneTwoLinkList(resultList, firstList);

	resultList = CloneTwoLinkList(resultList, firstList);
	resultList = CloneTwoLinkList(resultList, secondList);
	return resultList;
}

// Clone list without double elements
struct twoLinkList* CloneTwoLinkList(struct twoLinkList* resultList, struct twoLinkList* baseList) {
	struct twoLinkList* node, * rp, * bp;
	bool flag;
	for (bp = baseList; bp != NULL; bp = bp->next) {
		flag = false;
		for (rp = resultList; rp != NULL; rp = rp->next)
			if (bp->value == rp->value) {
				flag = true;
				break;
			}
		if (flag) continue;
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = bp->value;
		node->next = resultList;
		node->prev = NULL;
		if (resultList == NULL) {
			resultList = node;
			continue;
		}
		resultList->prev = node;
		resultList = node;
	}
	return resultList;
}

struct twoLinkList* IntersectTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList) {
	struct twoLinkList* fp, * sp, * node, * resultList = NULL;
	bool flag;

	for (fp = firstList; fp != NULL; fp = fp->next) {
		flag = false;
		for (sp = secondList; sp != NULL; sp = sp->next)
			if (fp->value == sp->value) {
				flag = true;
				break;
			}
		if (!flag) continue;
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = fp->value;
		node->next = resultList;
		node->prev = NULL;
		if (resultList != NULL)
			resultList->prev = node;
		resultList = node;
	}
	return resultList;
}

struct twoLinkList* SubstractTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList) {
	struct twoLinkList* fp, * sp, * node, * resultList = NULL;
	bool flag;

	for (fp = firstList; fp != NULL; fp = fp->next) {
		flag = false;
		for (sp = secondList; sp != NULL; sp = sp->next)
			if (fp->value == sp->value) {
				flag = true;
				break;
			}
		if (flag) continue;
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = fp->value;
		node->next = resultList;
		node->prev = NULL;
		if (resultList != NULL)
			resultList->prev = node;
		resultList = node;
	}
	return resultList;
}

struct twoLinkList* CreateRandomTwoLinkList(int count) {
	struct twoLinkList* node = NULL, * temp = NULL;
	if (count < 1) return NULL;
	temp = calloc(1, sizeof(struct twoLinkList));
	temp->value = rand() % 10;
	temp->next = temp->prev = NULL;
	if (count == 1) return temp;

	for (int i = 1; i < count; i++) {
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = rand() % 10;
		node->next = temp;
		node->prev = NULL;
		temp->prev = node;
		temp = node;
	}
	return node;
}

void PrintTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* p;
	if (list != NULL)
		for (p = list; p != NULL; p = p->next)
			printf("%d ", p->value);
	printf("\n");
}

void FreeTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* p, *temp;
	for (p = list; p != NULL;) {
		temp = p->next;
		free(p);
		p = temp;
	}
}

struct twoLinkList* SelectSortTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* pi, * pj, *min;

	for (pi = list; pi != NULL; ) {
		min = pi;
		for (pj = pi; pj != NULL; pj = pj->next)
			if (pj->value < min->value)
				min = pj;
		if (min == pi) {
			pi = pi->next;
			continue;
		}
		min->prev->next = min->next;
		if (min->next != NULL)
			min->next->prev = min->prev;
		if (pi->prev != NULL)
			pi->prev->next = min;
		min->prev = pi->prev;
		min->next = pi;
		pi->prev = min;
		if (pi == list)
			list = min;
	}
	return list;
}

struct twoLinkList* InsertSortTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* pi, * pj, * temp;
	if (list == NULL) return NULL;

	for (pi = list->next; pi != NULL; ) {
		for (pj = list; pj != pi; pj = pj->next) {
			if (pi->value < pj->value)
				break;
		}
		if (pi == pj) {
			pi = pi->next;
			continue;
		}
		temp = pi->prev->next = pi->next;
		if (pi->next != NULL)
			pi->next->prev = pi->prev;
		pi->prev = pj->prev;
		pi->next = pj;
		if (pj != list)
			pj->prev->next = pi;
		pj->prev = pi;
		if (pj == list)
			list = pi;
		pi = temp;
	}
	return list;
}


struct twoLinkList* CreateRandomCircleTwoLinkList(int count) {
	struct twoLinkList* pHead = NULL, * pTail, * temp;
	if (count < 1) return NULL;
	pTail = calloc(1, sizeof(struct twoLinkList));
	pTail->value = rand() % 10;
	pTail->prev = pTail->next = NULL;
	temp = pTail;
	if (count == 1) return pTail;
	for (int i = 1; i < count; i++) {
		pHead = calloc(1, sizeof(struct twoLinkList));
		pHead->value = rand() % 10;
		pHead->next = temp;
		pHead->prev = NULL;
		temp->prev = pHead;
		temp = pHead;
	}
	pHead->prev = pTail;
	pTail->next = pHead;
	return pHead;
}

struct twoLinkList* UnionCircleTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList) {
	struct twoLinkList* resultList = NULL;

	if (firstList == NULL && secondList == NULL) return NULL;
	if (firstList == NULL)
		return CloneCircleTwoLinkLists(resultList, secondList);
	if (secondList == NULL)
		return CloneCircleTwoLinkLists(resultList, firstList);
	resultList = CloneCircleTwoLinkLists(resultList, firstList);
	resultList = CloneCircleTwoLinkLists(resultList, secondList);

	return resultList;
}

struct twoLinkList* CloneCircleTwoLinkLists(struct twoLinkList* resultList, struct twoLinkList* baseList) {
	struct twoLinkList* pr, * pb, * node;
	bool flag;

	pb = baseList; // for uncircled list:  for (pb = baseList; pb != NULL; pb = pb->next)
	do {
		flag = false;
		pr = resultList; // for uncircled list:  for (pr = resultList; pr != NULL; pr = pr->next)
		if (pr != NULL)
			do {
				if (pb->value == pr->value) {
					flag = true;
					break;
				}
				else if (resultList == resultList->next)
					break;
				pr = pr->next;
			} while (pr != resultList);
		if (flag) {
			pb = pb->next;
			continue;
		}
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = pb->value;
		if (resultList == NULL) {
			node->prev = node->next = node;
			resultList = node;
			pb = pb->next;
			continue;
		}
		if (resultList == resultList->next) {
			resultList->prev = resultList->next = node;
			node->prev = node->next = resultList;
			pb = pb->next;
			continue;
		}
		pr = resultList->prev; // point to the tail
		pr->next = node;
		node->prev = pr;
		node->next = resultList;
		resultList->prev = node;
		pb = pb->next;
	} while (pb != baseList);
	return resultList;
}

struct twoLinkList* IntersectCircleTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* seconfList) {
	struct twoLinkList* resultList = NULL, * pr, * pf, * ps, * node;
	bool flag;

	pf = firstList; // for uncircled lists:  for (pf = firstList; pf != NULL; pf = pf->next)
	do {
		flag = false;
		ps = seconfList; // for uncircled lists:  for (ps = seconfList; ps != NULL; ps = ps->next)
		do {
			if (pf->value == ps->value) {
				flag = true;
				break;
			}
			ps = ps->next;
		} while (ps != seconfList);
		if (!flag) {
			pf = pf->next;
			continue;
		}
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = pf->value;
		if (resultList == NULL) {
			node->prev = node->next = node;
			resultList = node;
			pf = pf->next;
			continue;
		}
		if (resultList == resultList->next) {
			node->prev = node->next = resultList;
			resultList->prev = resultList->next = node;
			pf = pf->next;
			continue;
		}
		pr = resultList->prev; // pointer to the tail
		pr->next = node;
		node->prev = pr;
		node->next = resultList;
		resultList->prev = node;
		pf = pf->next;
	} while (pf != firstList);
	return resultList;
}

struct twoLinkList* SubstractCircleTwoLinkLists(struct twoLinkList* firstList, struct twoLinkList* secondList) {
	struct twoLinkList* resultList = NULL, * pr, * pf, * ps, * node;
	bool flag;

	pf = firstList; // for uncircled lists:  for (pf = firstList; pf != NULL; pf = pf->next)
	do {
		flag = false;
		ps = secondList; // for uncircled lists:  for (ps = secondList; ps != NULL; ps = ps->next)
		do {
			if (pf->value == ps->value) {
				flag = true;
				break;
			}
			ps = ps->next;
		} while (ps != secondList);
		if (flag) {
			pf = pf->next;
			continue;
		}
		node = calloc(1, sizeof(struct twoLinkList));
		node->value = pf->value;
		if (resultList == NULL) {
			node->prev = node->next = node;
			resultList = node;
			pf = pf->next;
			continue;
		}
		if (resultList == resultList->next) {
			node->prev = node->next = resultList;
			resultList->prev = resultList->next = node;
			pf = pf->next;
			continue;
		}
		pr = resultList->prev; // pointer to the tail
		pr->next = node;
		node->prev = pr;
		node->next = resultList;
		resultList->prev = node;
		pf = pf->next;
	} while (pf != firstList);
	return resultList;
}

struct twoLinkList* ReverseCircleTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* first, * second, * temp;
	if (list == NULL) return NULL;
	if (list == list->next) return list;
	first = list;
	second = first->next;

	do {
		temp = second->next;
		second->prev = temp;
		second->next = first;
		first = second;
		second = temp;
	} while (first != list);
	return first;
}

void PrintCircleTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* p;
	if (list == NULL) {
		printf("\n");
		return;
	}
	printf("%d ", list->value);
	for (p = list->next; p != list; p = p->next)
		printf("%d ", p->value);
	printf("\n");
}

void FreeCircleTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* p, * temp;
	for (p = list->next; p != list;) {
		temp = p->next;
		free(p);
		p = temp;
	}
	free(p);
}

struct twoLinkList* SelectSortCircleTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* pi, * pj, * min;
	if (list == NULL) return NULL;
	if (list->next == list) return NULL;

	pi = list;
	do {
		min = pj = pi;
		do {
			if (pj->value < min->value)
				min = pj;
			pj = pj->next;
		} while (pj != list);
		if (min == pi) { // if pi smaller of equal tha every right element of the list
			pi = pi->next;
			continue;
		}
		min->prev->next = min->next; // cut out min from the list
		min->next->prev = min->prev;
		min->prev = pi->prev; // insert min before pi
		min->next = pi;
		pi->prev->next = min;
		pi->prev = min;
		if (pi == list) list = min; // in the first iteration if min was smaller than the Head of the list
	} while (pi != list);
	return list;
}

struct twoLinkList* InsertSortCircleTwoLinkList(struct twoLinkList* list) {
	struct twoLinkList* pi, * pj, * temp;
	if (list == NULL) return NULL;
	if (list->next == list) return list;

	pi = list->next;
	do {
		pj = list;
		do {
			if (pi->value < pj->value)
				break;
			pj = pj->next;
		} while (pj != pi);
		if (pj == pi) { // if pi bigger or equal than every left element
			pi = pi->next;
			continue;
		}
		temp = pi->next; // save next pi
		pi->prev->next = pi->next; // cut out pi from the list
		pi->next->prev = pi->prev;
		pi->prev = pj->prev; // insert pi before pj
		pi->next = pj;
		pj->prev->next = pi;
		pj->prev = pi;
		if (pj == list) list = pi; // in the first iteration if pi was smaller than the Head of the list
		pi = temp; // next pi
	} while (pi != list);
	return list;
}


struct oneLinkListStrings* ReadFileToStringLinkList() {
	struct oneLinkListStrings* node, * result = NULL;
	char buffer[256];
	FILE* f = fopen("1.txt", "r");
	if (f == NULL) {
		printf("Can't open the file.");
		perror("Error opening the file.");
		abort();
	}
	while ((fgets(buffer, 256, f) != NULL)) {
		node = calloc(1, sizeof(struct oneLinkListStrings));
		strcpy(node->string, buffer);
		node->next = result;
		result = node;
	}
	fclose(f);
	return result;
}

void PrintLinkListStrings(struct oneLinkListStrings* linkStrings) {
	struct oneLinkListStrings* p;
	if (linkStrings != NULL)
		for (p = linkStrings; p != NULL; p = p->next)
			printf("%s", p->string);
	printf("\n");
}

void FreeLinkListStrings(struct oneLinkListStrings* linkStrings) {
	struct oneLinkListStrings* p, * temp;
	for (p = linkStrings; p != NULL; ) {
		temp = p->next;
		free(p);
		p = temp;
	}
}