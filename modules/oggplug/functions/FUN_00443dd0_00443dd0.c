/* Module: oggplug.dll
   Function: FUN_00443dd0
   Address: 00443dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00443dd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x58) == 3) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x60) * 0x20 + *(int *)(param_1 + 0x48);
    }
    FUN_00431c30((int *)(param_1 + 0x1e0),iVar1);
    FUN_00430e80((int *)(param_1 + 0x1e0),(undefined4 *)(param_1 + 0x250));
    *(undefined4 *)(param_1 + 0x58) = 4;
  }
  return;
}


