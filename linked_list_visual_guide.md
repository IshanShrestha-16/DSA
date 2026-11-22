# Linked List --- Visual Guide

A **linked list** is a linear data structure made of **nodes**. Each
node stores: 1. **Data** --- the value. 2. **Next** --- a pointer (link)
to the next node.

Unlike an array, linked-list nodes do not need to be stored next to each
other in memory.

------------------------------------------------------------------------

## 1. How a Singly Linked List Looks

``` mermaid
flowchart LR
    H["HEAD"] --> N1["Data: 10<br/>Next: address of Node 2"]
    N1 --> N2["Data: 20<br/>Next: address of Node 3"]
    N2 --> N3["Data: 30<br/>Next: NULL"]
    N3 --> END["End of list"]
```

**How to read this diagram:** - `HEAD` stores the address of the first
node. - The first node contains `10` and links to the second node. - The
second node contains `20` and links to the third node. - The last node
contains `30` and points to `NULL`, meaning there is no next node.

## 2. Inside One Node

``` mermaid
flowchart LR
    D["DATA<br/>10"] --- P["NEXT<br/>Address of next node"]
```

A node has two fields: the data field and the link (pointer) field.

## 3. How Traversal Works

**Traversal** means visiting each node one by one, starting from `HEAD`.

``` mermaid
flowchart TD
    A([Start]) --> B["current = HEAD"]
    B --> C{"Is current NULL?"}
    C -- No --> D["Visit / display current.data"]
    D --> E["current = current.next"]
    E --> C
    C -- Yes --> F([Stop])
```

In simple terms: start at the first node, display its data, follow its
`next` pointer, and repeat until `current` becomes `NULL`.

## 4. Important Terms

  Term          Meaning
  ------------- --------------------------------------
  Node          One element of a linked list
  Data          Value stored in a node
  Next / Link   Pointer to the next node
  Head          Pointer to the first node
  NULL          Indicates that there is no next node

## 5. Linked List vs Array

  -----------------------------------------------------------------------
  Array                               Linked List
  ----------------------------------- -----------------------------------
  Elements are stored in contiguous   Nodes can be stored in
  memory locations.                   non-contiguous memory locations.

  Usually has a fixed size in basic   Can grow or shrink dynamically.
  array implementations.              

  Supports direct index access.       Access is sequential, node by node.

  Inserting or deleting in the middle Insertion or deletion can be done
  may require shifting elements.      by changing links (once the
                                      position is reached).
  -----------------------------------------------------------------------

## Remember

Think of a linked list like a train: - Each coach is a **node**. - The
passengers/items inside are the **data**. - The connection to the next
coach is the **next pointer**. - The final coach has no next coach, so
its link is `NULL`.

**Key idea:** `HEAD → first node → next node → ... → NULL`
