/* Module: sfxpfx1.dll
   Function: FUN_5c97c030
   Address: 5c97c030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c97c030(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 4);
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


