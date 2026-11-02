/* Module: stl2plg.dll
   Function: FUN_00402730
   Address: 00402730
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00402730(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00402690(this,*(int **)(param_1 + 8));
  if (-1 < iVar1) {
    FUN_00402710(this,(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
    lstrcpynA((LPSTR)((int)this + 0x78),(LPCSTR)(param_1 + 0x78),0x104);
    *(undefined1 *)((int)this + 0x17b) = 0;
  }
  return iVar1;
}


