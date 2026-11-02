/* Module: vegas30.exe
   Function: FUN_00588670
   Address: 00588670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00588670(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005829d0(0,*(undefined4 *)(DAT_0065a054 + 0x24),&DAT_0060f98c,0x46000000,0,0,0,0,
                       param_2,param_4);
  if (-1 < iVar1) {
    uVar2 = GetWindowLongA(*(HWND *)(param_1 + 8),-0x10);
    SetWindowLongA(*(HWND *)(param_1 + 8),-0x10,uVar2 | param_3);
  }
  return iVar1;
}


