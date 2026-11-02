/* Module: pncrt.dll
   Function: isEmpty
   Address: 780064e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    public: int __thiscall DName::isEmpty(void)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall DName::isEmpty(DName *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = isValid(this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


