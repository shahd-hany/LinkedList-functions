/*time complexity for this function O(n ^2) where "n" is number of nudes that is the head of linked list in first loop as its worst case and "n" number of nudes in second loop
	 as linked list might not contain the element as its worst case as well  */
	 // space  complexity is O(1) there is no new space in memory needed as i use temp pointers only . 
void occurrences(node*& head, int elemnt) {
	//هنغير في مكان ال head عشان ممكن ال element يبقا في اول الليست فلازم نشيله
	while (head && (head->data == elemnt)) {
		node* temp = head;
		//هشاور بيه على ال head وهحرك ال head لل node اللي بعده
		head = head->next;
		delete temp;
		//همسح ال temp اللي كان اصلا ال head بس حركنا ال head ومسحنا محتواه القديم
	}
	node* temp = head;
	//همشي ال Temp على ال Linked list كلها ومينفعش احرك ال head
	while (temp && temp->next) {
		if (temp->next->data == elemnt) {
			//مش هحركه من مكانه وهبص على اللي بعده 
			node* t = temp->next;
			//هكريت بوينتر عشان يشاور عليه ويمسحه
			temp->next = temp->next->next;
			//هخليه يسكيب ال node اللي فيها ال elemnt
			delete t;
			// هنمسح البيونتر اللي بيشاور على ال node اللي فيها ال elemnt
		}
		else
			//لو ال node اللي بعده امان هيتحرك من مكانه ليها
			temp = temp->next;
	}
}
