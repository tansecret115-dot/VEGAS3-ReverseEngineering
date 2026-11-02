/* Module: vegas30.exe
   Function: FUN_00455270
   Address: 00455270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455270(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  
  ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&param_2);
  *(uint *)(param_1 + 0x354) = param_4;
  *(uint *)(param_1 + 0x358) =
       (*(uint *)(param_1 + 0x358) ^ param_5) & 1 ^ *(uint *)(param_1 + 0x358);
  uVar2 = param_4 >> 0x10 & 0xf;
  *(uint *)(param_1 + 0x35c) = param_2;
  *(int *)(param_1 + 0x360) = param_3;
  if (uVar2 < 0x10) {
    piVar1 = *(int **)(param_1 + 0x50 + uVar2 * 4);
    (**(code **)(*piVar1 + 0xc))
              (param_1,piVar1,0x7b,*(undefined4 *)(param_1 + 4),param_3 << 0x10 | param_2 & 0xffff);
  }
  *(undefined4 *)(param_1 + 0x354) = 0;
  return;
}


