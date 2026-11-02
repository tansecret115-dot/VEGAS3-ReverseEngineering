/* Module: mp3plug.dll
   Function: FUN_5f69d010
   Address: 5f69d010
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69d010(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  HWND pHVar2;
  int iVar3;
  BYTE *pBVar4;
  int *unaff_EDI;
  int *piVar5;
  int *piVar6;
  uchar local_71c [248];
  uchar auStack_624 [252];
  undefined1 auStack_528 [20];
  WCHAR local_514 [236];
  uchar auStack_33c [46];
  undefined2 local_30e;
  WCHAR aWStack_214 [258];
  HWND pHStack_10;
  
  local_71c[0] = '\0';
  local_514[0] = L'\0';
  FUN_5f69d1b0(param_2,local_71c);
  MultiByteToWideChar(0,1,(LPCSTR)local_71c,-1,local_514,0x104);
  puVar1 = *(undefined4 **)((int)this + 0xc);
  local_30e = 0;
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    piVar6 = (int *)&DAT_5f72d3d8;
    iVar3 = (**(code **)*puVar1)(puVar1);
    if (-1 < iVar3) {
      FUN_5f6b3df0(DAT_5f74d2e8,auStack_624,0x104);
      MultiByteToWideChar(0,1,(LPCSTR)auStack_624,-1,aWStack_214,0x104);
      pHStack_10 = (HWND)(uint)(ushort)pHStack_10;
      (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,aWStack_214);
      if (DAT_5f74d2fc != 0) {
        MultiByteToWideChar(0,1,&DAT_5f74d344,-1,(LPWSTR)&stack0xfffff850,0x40);
        (**(code **)(*piVar6 + 0x24))(piVar6,&stack0xfffff850);
      }
      pHVar2 = pHStack_10;
      piVar5 = (int *)0x160;
      iVar3 = (**(code **)(*piVar6 + 0x10))(piVar6,pHStack_10,500,0x160,1,auStack_528,0);
      if (iVar3 == 0) {
        pBVar4 = (BYTE *)FUN_5f69e250(DAT_5f74d2f4,0xbc9);
        FUN_5f6b1a30(auStack_33c,pBVar4);
        FUN_5f6b1f00(pHVar2,0x40,auStack_33c);
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      return iVar3;
    }
  }
  return iVar3;
}


