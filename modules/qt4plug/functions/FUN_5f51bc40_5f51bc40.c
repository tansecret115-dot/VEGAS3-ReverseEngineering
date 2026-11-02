/* Module: qt4plug.dll
   Function: FUN_5f51bc40
   Address: 5f51bc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51bc40(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  BYTE *pBVar1;
  uchar *lpMultiByteStr;
  longlong lVar2;
  uint uVar3;
  uchar local_100 [256];
  
  if (param_4 == 1) {
    lpMultiByteStr = (uchar *)(param_1 + 0xa0);
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 3) {
        if (*(int *)(param_1 + 0x94) == 0) {
          pBVar1 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x46);
          FUN_5f52c900(local_100,pBVar1);
          lpMultiByteStr = local_100;
          goto LAB_5f51be2f;
        }
        uVar3 = *(uint *)(param_1 + 0x98);
        if (uVar3 == 0) {
          pBVar1 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x46);
          FUN_5f52c900(local_100,pBVar1);
        }
        else {
          lVar2 = __allmul((uint)*(ushort *)(param_1 + 0x5a),0,*(uint *)(param_1 + 0x38),
                           *(int *)(param_1 + 0x3c));
          lVar2 = __alldiv((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),uVar3,0);
          if ((-1 < lVar2) && (lVar2 != 0)) {
            __allmul(*(uint *)(param_1 + 0x9c),0,(uint)lVar2,(int)((ulonglong)lVar2 >> 0x20));
            ftol();
            pBVar1 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x46);
            FUN_5f52c900(local_100,pBVar1);
            lpMultiByteStr = local_100;
            goto LAB_5f51be2f;
          }
        }
      }
      return 1;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      FUN_5f534fb0((ushort *)(param_1 + 0x58),local_100);
    }
    else {
      if (*(short *)(param_1 + 0x5a) == 1) {
        uVar3 = 0x1b0;
      }
      else {
        uVar3 = 0x1b1;
      }
      FUN_5f527a90(DAT_5f5a4158,uVar3);
      pBVar1 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1af);
      FUN_5f52c900(local_100,pBVar1);
    }
    lpMultiByteStr = local_100;
  }
LAB_5f51be2f:
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


