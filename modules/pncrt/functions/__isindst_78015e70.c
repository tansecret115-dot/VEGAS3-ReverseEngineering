/* Module: pncrt.dll
   Function: __isindst
   Address: 78015e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 1998 Release */

int __cdecl __isindst(tm *_Time)

{
  bool bVar1;
  undefined3 extraout_var;
  
  _lock(0xb);
  bVar1 = FUN_78015ea0(&_Time->tm_sec);
  _unlock(0xb);
  return CONCAT31(extraout_var,bVar1);
}


