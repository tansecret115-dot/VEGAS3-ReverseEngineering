/* Module: vidcap30.exe
   Function: FUN_0052fea0
   Address: 0052fea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0052fea0(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 uVar3;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  pvVar1 = CreateFileA(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_00536e70(0xaaaaaaa4,"OpenMultiVol",0);
    return -0x7ffb1ffa;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = FUN_00530760(pvVar1);
  if (iVar2 < 0) {
    FUN_00536e70(0xaaaaaaa5,"OpenMultiVol",0);
    return -0x7ffb1f50;
  }
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  uVar3 = _SfGetFileNamePtrA_4(param_2);
  SfPrintF(local_208,"%s~%s",local_104,uVar3);
  pvVar1 = CreateFileA((LPCSTR)local_208,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
  ;
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_00536e70(0xaaaaaaa2,local_208,0);
    return -0x7ffb1ffa;
  }
  _mbscpy((uchar *)(param_1 + 0x77c),local_208);
  *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x40);
  *(HANDLE *)(param_1 + 0xc) = pvVar1;
  if (*(int *)(param_1 + 0x890) != 0 || *(int *)(param_1 + 0x894) != 0) {
    iVar2 = FUN_00530190();
    return iVar2;
  }
  return iVar2;
}


