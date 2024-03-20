//time complexity for this function o(n) where n is number of nudes 
	// space  complexity is o(n) each recursive call to sum function consumes additional space on the stack to store its variables and return address.
int sum(node* ptr) {
	//هناخد ال head arg ونتحرك من بعده
	if (ptr == nullptr)
		//ال base عشان الفانكشن تقف وال tree تخلص ويبدا يجمع مفكوك كل فانكشن
		return 0;
	return ptr->data + sum(ptr->next);
	//هيجمع داتا الnode وياخد اللي بعدها argument عشان ياخد الداتا بتاعتها

}