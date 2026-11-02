/* Module: vegas30k.dll
   Function: FUN_011bfb10
   Address: 011bfb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bfb10(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x5c))(*(int **)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
    return 0;
  }
  iVar1 = FUN_011bf9b0(param_2);
  if ((-1 < iVar1) && (iVar1 == 0)) {
    uVar2 = FUN_011aafa0(param_1);
    FUN_011aaf70(param_1,uVar2 & 0xfffffffb | 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 0x10;
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
      (**(code **)(param_1 + 0xe0))(param_1,2,*(undefined4 *)(param_1 + 0xe4),0,0,0,0,0,0);
    }
  }
  return iVar1;
}


