/* Module: vegas30.exe
   Function: FUN_005d0de0
   Address: 005d0de0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_005d0de0(void)

{
  int iVar1;
  HRESULT HVar2;
  LPVOID *in_stack_00000014;
  
  iVar1 = _SfPlugIn_FindNode_8(DAT_0064b468,&stack0x00000004);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 4) != 0)) {
    HVar2 = CoCreateInstance((IID *)&stack0x00000004,(LPUNKNOWN)0x0,3,(IID *)&DAT_0060f788,
                             in_stack_00000014);
    return HVar2;
  }
  return -0x7fffbffe;
}


