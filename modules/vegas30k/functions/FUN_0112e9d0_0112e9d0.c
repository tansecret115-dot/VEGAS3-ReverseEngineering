/* Module: vegas30k.dll
   Function: FUN_0112e9d0
   Address: 0112e9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112e9d0(int param_1)

{
  undefined4 uVar1;
  HRESULT HVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *unaff_EBP;
  int *unaff_EDI;
  int *piVar6;
  int *local_558 [61];
  uchar auStack_464 [272];
  WCHAR aWStack_354 [254];
  undefined1 auStack_158 [10];
  undefined2 uStack_14e;
  uchar *puStack_10;
  
  uVar5 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  HVar2 = CoCreateInstance((IID *)&DAT_011ec7d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_011ec7e0,local_558);
  if (HVar2 < 0) {
    return 0;
  }
  piVar6 = (int *)&DAT_011f0e40;
  iVar3 = (**(code **)*local_558[0])();
  if (iVar3 < 0) goto LAB_0112eb12;
  MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x4f0),-1,aWStack_354,0x104);
  uStack_14e = 0;
  iVar3 = (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,aWStack_354,0);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*local_558[0] + 0x4c))(local_558[0],uVar1,0);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*local_558[0] + 0xc))(local_558[0],&stack0xfffffa98,0x104,auStack_158,2);
      if (iVar3 < 0) {
        _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x498));
      }
      else {
        _mbscpy(puStack_10,&stack0xfffffa98);
        pcVar4 = (char *)_SfGetFileNameExtensionPtrA_4(&stack0xfffffa98);
        if (*pcVar4 == '\0') goto LAB_0112eb02;
      }
    }
    else {
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x498));
      _SfGetPathNameFromFilePath_12(auStack_464,(LPCSTR)(param_1 + 0x4f0),0x208);
      _mbscpy(puStack_10,auStack_464);
LAB_0112eb02:
      uVar5 = 1;
    }
  }
  (**(code **)(*piVar6 + 8))(piVar6);
LAB_0112eb12:
  (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  return uVar5;
}


