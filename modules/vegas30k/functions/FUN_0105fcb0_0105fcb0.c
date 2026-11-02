/* Module: vegas30k.dll
   Function: FUN_0105fcb0
   Address: 0105fcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0105fcb0(int param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DStack_110;
  undefined1 auStack_10c [8];
  undefined1 local_104 [260];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return 1;
  }
  (**(code **)(**(int **)(param_1 + 0x34) + 0x20))(local_104,0x104);
  iVar1 = _SfDosGetDateTime_4(auStack_10c);
  if ((*(int *)(param_1 + 0x2ac) == 0) && (iVar1 == *(int *)(param_1 + 0x268))) {
    return 0;
  }
  if (*(HANDLE *)(param_1 + 600) == (HANDLE)0xffffffff) {
    return -0x7fff0001;
  }
  *(int *)(param_1 + 0x268) = iVar1;
  SetFilePointer(*(HANDLE *)(param_1 + 600),0,(PLONG)&stack0xfffffeec,0);
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 600),(LPCVOID)(param_1 + 0x25c),0x40,&DStack_110,
                    (LPOVERLAPPED)0x0);
  return (-(uint)(BVar2 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


