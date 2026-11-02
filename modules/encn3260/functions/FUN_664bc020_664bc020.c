/* Module: encn3260.dll
   Function: FUN_664bc020
   Address: 664bc020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664bc020(undefined4 *param_1,LPCSTR param_2,BOOL param_3)

{
  void *this;
  undefined4 *puVar1;
  
  *param_1 = 0;
  this = operator_new(8);
  if (this != (void *)0x0) {
    puVar1 = FUN_664c44c0(this,param_2,param_3);
    *param_1 = puVar1;
    return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  *param_1 = 0;
  return -0x7ff8fff2;
}


