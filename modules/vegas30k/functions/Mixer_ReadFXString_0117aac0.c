/* Module: vegas30k.dll
   Function: Mixer_ReadFXString
   Address: 0117aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall Mixer_ReadFXString(unsigned char *,struct _tfxsend *) */

void Mixer_ReadFXString(uchar *param_1,_tfxsend *param_2)

{
  SIZE_T SVar1;
  HGLOBAL pvVar2;
  uchar *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  LPCWSTR lpWideCharStr;
  uchar *puVar8;
  
                    /* 0x17aac0  214  ?Mixer_ReadFXString@@YGXPAEPAU_tfxsend@@@Z */
  if ((param_1 != (uchar *)0x0) && (param_2 != (_tfxsend *)0x0)) {
    *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)param_1;
    SVar1 = *(SIZE_T *)(param_1 + 4);
    *(SIZE_T *)(param_2 + 0x10c) = SVar1;
    pvVar2 = GlobalAlloc(0x42,SVar1);
    puVar3 = GlobalLock(pvVar2);
    uVar6 = *(uint *)(param_2 + 0x10c);
    *(uchar **)(param_2 + 0x108) = puVar3;
    puVar8 = param_1 + 8;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)puVar3 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 4;
      puVar3 = puVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar7 = (uint *)(param_1 + 8 + *(int *)(param_2 + 0x10c));
    uVar6 = *puVar7;
    lpWideCharStr = (LPCWSTR)(puVar7 + 1);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)param_2,uVar6 >> 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      *param_2 = (_tfxsend)0x0;
    }
    param_2[(uVar6 >> 1) - 1] = (_tfxsend)0x0;
    SVar1 = *(SIZE_T *)lpWideCharStr;
    *(SIZE_T *)(param_2 + 0x114) = SVar1;
    if (SVar1 != 0) {
      pvVar2 = GlobalAlloc(0x42,SVar1);
      puVar4 = GlobalLock(pvVar2);
      uVar6 = *(uint *)(param_2 + 0x114);
      *(uint **)(param_2 + 0x110) = puVar4;
      puVar7 = puVar7 + 2;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar4 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      }
    }
  }
  return;
}


