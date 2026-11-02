/* Module: sfpublish.dll
   Function: FUN_0040b7f0
   Address: 0040b7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040b7f0(int *param_1,undefined4 *param_2,uchar *param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  int *local_51c;
  int *local_518;
  uchar local_514 [260];
  WCHAR local_410 [259];
  undefined2 local_20a;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  _mbscpy(local_514,param_3);
  MultiByteToWideChar(0,1,(LPCSTR)param_4,-1,local_410,0x104);
  local_20a = 0;
  puVar1 = _mbsstr(local_514,param_4);
  if (puVar1 != (uchar *)0x0) {
    puVar1 = _mbstok(local_514,&DAT_00435da0);
    while (puVar1 != (uchar *)0x0) {
      iVar2 = lstrcmpiA((LPCSTR)puVar1,(LPCSTR)param_4);
      if (iVar2 == 0) {
        puVar1 = _mbstok((uchar *)0x0,&DAT_00435d9c);
        if (puVar1 == (uchar *)0x0) break;
        local_518 = (int *)0x0;
        iVar2 = FUN_00424260((int)param_1,param_2,local_410,&local_518);
        if (iVar2 < 0) break;
        MultiByteToWideChar(0,1,(LPCSTR)puVar1,-1,local_208,0x104);
        local_2 = 0;
        local_51c = (int *)0x0;
        iVar2 = FUN_004243c0(param_1,local_518,local_208,&local_51c);
        if (-1 < iVar2) {
          (**(code **)(*local_51c + 8))(local_51c);
          return iVar2;
        }
        (**(code **)(*local_518 + 8))(local_518);
      }
      else {
        _mbstok((uchar *)0x0,&DAT_00435d9c);
      }
      puVar1 = _mbstok((uchar *)0x0,&DAT_00435da0);
    }
  }
  local_51c = (int *)0x0;
  iVar2 = FUN_00424260((int)param_1,param_2,local_410,&local_51c);
  if (-1 < iVar2) {
    (**(code **)(*local_51c + 8))(local_51c);
  }
  return iVar2;
}


