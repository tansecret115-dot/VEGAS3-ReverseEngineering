/* Module: rnco3260.dll
   Function: FUN_636f95d0
   Address: 636f95d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f95d0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_3;
  param_3 = (undefined4 *)param_2;
  iVar2 = param_4 >> 1;
  if (param_2 != 0) {
    puVar3 = (undefined1 *)(param_1 + 2);
    do {
      uVar1 = *puVar4;
      puVar3[-2] = (char)((uint)uVar1 >> 0x10);
      puVar3[-1] = (char)((uint)uVar1 >> 8);
      *puVar3 = (char)uVar1;
      puVar3 = puVar3 + 3;
      do {
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 - param_2;
      } while (-1 < iVar2);
      iVar2 = iVar2 + param_4;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


