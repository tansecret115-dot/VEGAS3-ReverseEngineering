/* Module: vegas30k.dll
   Function: FUN_010693d0
   Address: 010693d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_010693d0(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_01070600(0xaaaaaaa4,"Open Delete",0);
    return -0x7ffb1ffa;
  }
  iVar2 = FUN_01069ef0(pvVar1);
  if (iVar2 < 0) {
    FUN_01070600(0xaaaaaaa5,"Open Delete",0);
    return -0x7ffb1f50;
  }
  iVar3 = CArchive2::GetMultiVolumeStatus();
  if (1 < iVar3) {
    FUN_01070600(0xaaaaaaa1,"Open Delete",0);
    return -0x7ffb1f50;
  }
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  uVar4 = _SfGetFileNamePtrA_4(param_2);
  SfPrintF(local_208,"%s~%s",local_104,uVar4);
  pvVar1 = CreateFileA((LPCSTR)local_208,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
  ;
  if (pvVar1 != (HANDLE)0xffffffff) {
    _mbscpy((uchar *)(param_1 + 0x77c),local_208);
    *(HANDLE *)(param_1 + 0xc) = pvVar1;
    *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((-1 < *(int *)(param_1 + 0x894)) &&
       ((0 < *(int *)(param_1 + 0x894) || (*(int *)(param_1 + 0x890) != 0)))) {
      iVar2 = FUN_01069920();
    }
    if (-1 < iVar2) {
      iVar2 = _SfList_CreateExZ_32(param_1 + 0x10,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
      return iVar2;
    }
    return iVar2;
  }
  FUN_01070600(0xaaaaaaa2,local_208,0);
  return -0x7ffb1ffa;
}


