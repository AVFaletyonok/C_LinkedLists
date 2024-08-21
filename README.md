# Linked lists

## Contents  

1. [Chapter I. Single linked list](#chapter-i.-implement-single-linked-list)
2. [Chapter II. Doubly linked list](#chapter-ii-implement-doubly-linked-list)
3. [Chapter III. Cyrcle linked list](#chapter-iii-implement-cyrcle-linked-list)

## Chapter I. Implement single linked list

Single linked list (SLL) structure in C language:
```c
struct oneLinkList {
	struct oneLinkList* next;
	int value;
};
```

Single linked list (SLL) operations:
- .1. Union two single linked lists.
```c
struct oneLinkList* UnionOneLinkLists(struct oneLinkList* firstList,
										struct oneLinkList* secondList);
```
- .2. Clone two single linked lists.
```c
struct oneLinkList* CloneOneLinkList(struct oneLinkList* resultList,
										struct oneLinkList* baseList);
```
- .3. Intersect two single linked lists.
```c
struct oneLinkList* IntersectOneLinkLists(struct oneLinkList* firstList,
											struct oneLinkList* secondList);
```
- .4. Substract two single linked lists.
```c
struct oneLinkList* SubstractOneLinkLists(struct oneLinkList* firstList,
											struct oneLinkList* secondList);
```
- .5. Reverse single linked list.
```c
struct oneLinkList* ReverseOneLinkList(struct oneLinkList* list);
```

## Chapter II. Implement doubly linked list [](#){name=chapter-ii-implement-doubly-linked-list}

Doubly linked list (DLL) structure in C language:
```c
struct twoLinkList {
	struct twoLinkList* next;
	struct twoLinkList* prev;
	int value;
};
```

Doubly linked list (SLL) operations:
- .1. Union two doubly linked lists.
```c
struct twoLinkList* UnionTwoLinkLists(struct twoLinkList* firstList,
										struct twoLinkList* secondList);
```
- .2. Clone two doubly linked lists.
```c
struct twoLinkList* CloneTwoLinkList(struct twoLinkList* resultList,
										struct twoLinkList* baseList);
```
- .3. Intersect two doubly linked lists.
```c
struct twoLinkList* IntersectTwoLinkLists(struct twoLinkList* firstList,
											struct twoLinkList* secondList);
```
- .4. Substract two doubly linked lists.
```c
struct twoLinkList* SubstractTwoLinkLists(struct twoLinkList* firstList,
											struct twoLinkList* secondList);
```
- .5. Reverse doubly linked list.
```c
struct twoLinkList* ReverseTwoLinkList(struct twoLinkList* list);
```
- .6. Sort doubly linked list by select.
```c
struct twoLinkList* SelectSortTwoLinkList(struct twoLinkList* list);
```
- .7. Sort doubly linked list by insert.
```c
struct twoLinkList* InsertSortTwoLinkList(struct twoLinkList* list);
```

## Chapter III. Implement cyrcle linked list

Cyrcle linked list is based on doubly linked list structure.

Cyrcle linked list operations:
- .1. Union two cyrcle linked lists.
```c
struct twoLinkList* UnionCircleTwoLinkLists(struct twoLinkList* firstList,
										struct twoLinkList* secondList);
```
- .2. Clone two cyrcle linked lists.
```c
struct twoLinkList* CloneCircleTwoLinkList(struct twoLinkList* resultList,
										struct twoLinkList* baseList);
```
- .3. Intersect two cyrcle linked lists.
```c
struct twoLinkList* IntersectCircleTwoLinkLists(struct twoLinkList* firstList,
											struct twoLinkList* secondList);
```
- .4. Substract two cyrcle linked lists.
```c
struct twoLinkList* SubstractCircleTwoLinkLists(struct twoLinkList* firstList,
											struct twoLinkList* secondList);
```
- .5. Reverse cyrcle linked list.
```c
struct twoLinkList* ReverseCircleTwoLinkList(struct twoLinkList* list);
```
- .6. Sort cyrcle linked list by select.
```c
struct twoLinkList* SelectSortCircleTwoLinkList(struct twoLinkList* list);
```
- .7. Sort cyrcle linked list by insert.
```c
struct twoLinkList* InsertSortCircleTwoLinkList(struct twoLinkList* list);
```

