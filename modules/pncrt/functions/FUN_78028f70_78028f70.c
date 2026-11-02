/* Module: pncrt.dll
   Function: FUN_78028f70
   Address: 78028f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78028f70(undefined2 *param_1,int param_2,FILE *param_3,int *param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  do {
    if (iVar2 < 1) {
      return;
    }
    iVar2 = iVar2 + -1;
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_78028f00(CONCAT22((short)((uint)param_2 >> 0x10),uVar1),param_3,param_4);
    param_2 = *param_4;
  } while (param_2 != -1);
  return;
}


