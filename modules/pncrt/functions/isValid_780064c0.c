/* Module: pncrt.dll
   Function: isValid
   Address: 780064c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    public: int __thiscall DName::isValid(void)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall DName::isValid(DName *this)

{
  if (((*(uint *)(this + 4) & 0xf) != 0) && ((*(uint *)(this + 4) & 0xf) != 2)) {
    return 0;
  }
  return 1;
}


