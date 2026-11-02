/* Module: mp3plug.dll
   Function: FUN_5f69bda0
   Address: 5f69bda0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f69bda0(void *this,undefined1 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar1 = param_2 - 10;
  *param_1 = 0x49;
  param_1[6] = (byte)(uVar1 >> 0x15) & 0x7f;
  param_1[1] = 0x44;
  param_1[7] = (byte)(uVar1 >> 0xe) & 0x7f;
  param_1[2] = 0x33;
  param_1[3] = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = (byte)(uVar1 >> 7) & 0x7f;
  param_1[9] = (char)param_2 - 10U & 0x7f;
  puVar3 = param_1 + 10;
  iVar4 = 0;
  iVar2 = **(int **)((int)this + 0x18);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined1 *)
               (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 8) + iVar4 * 4) + 4))
                         (puVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}


