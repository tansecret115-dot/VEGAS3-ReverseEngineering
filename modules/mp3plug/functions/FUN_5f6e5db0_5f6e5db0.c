/* Module: mp3plug.dll
   Function: FUN_5f6e5db0
   Address: 5f6e5db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_5f6e5db0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_5f6d9760(0x2c);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_5f6d9760(param_2 + 4U & 0xfffffffc);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      piVar1[3] = param_2;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[2] = 0;
      piVar1[1] = 0;
      return piVar1;
    }
  }
  return (int *)0x0;
}


