/* Module: vidcap30.exe
   Function: FUN_004676f0
   Address: 004676f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004676f0(int *param_1)

{
  int iVar1;
  LPWSTR unaff_retaddr;
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  undefined1 local_104 [260];
  
  puStack_10c = local_104;
  uStack_108 = 0x104;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (-1 < iVar1) {
    MultiByteToWideChar(0,1,(LPCSTR)&puStack_10c,-1,unaff_retaddr,(int)param_1);
    unaff_retaddr[(int)param_1 + -1] = L'\0';
    return 0;
  }
  return 0;
}


