/* Module: vegas30.exe
   Function: FUN_00603590
   Address: 00603590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00603590(int param_1,char *param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  HKEY local_24;
  HKEY local_20;
  HKEY local_1c;
  CHAR local_18 [24];
  
  local_20 = (HKEY)0x0;
  local_1c = (HKEY)0x0;
  local_24 = (HKEY)0x0;
  pcVar4 = "00-95J86R-7XN4TW-0JM6GN";
  iVar2 = lstrcmpA(param_3,"3");
  if (iVar2 == 0) {
    pcVar4 = "00-8TW00R-XXHG34-P0NNRT";
  }
  iVar2 = lstrcmpA(param_3,"15");
  if ((iVar2 == 0) || (iVar2 = lstrcmpA(param_3,"16"), iVar2 == 0)) {
    if (*(int *)(param_1 + 0x7e0) == 0) {
      return -0x7ff8ffa9;
    }
    wsprintfA(local_18,"00-T8Y5QK-E3%04X-L9MGNK",*(int *)(param_1 + 0x7e0));
    pcVar4 = local_18;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar4 = param_2;
  }
  iVar2 = FUN_006089e0(*(undefined4 *)(param_1 + 0x30),&local_20,param_1 + 0x797,0x2e);
  if ((-1 < iVar2) || (iVar2 = FUN_00608ce0(*(undefined4 *)(param_1 + 0x30),&local_20), -1 < iVar2))
  {
    iVar2 = FUN_006094a0(local_20);
    if (iVar2 == 0) {
      iVar2 = -0x7ff8ffa9;
    }
    else {
      FUN_00609020(local_20,&local_1c);
      bVar1 = false;
      iVar2 = FUN_00609070(local_1c,pcVar4,&local_24);
      if (iVar2 < 0) {
        bVar1 = true;
        iVar2 = FUN_006090f0(local_1c,pcVar4,&local_24);
        if (iVar2 < 0) goto LAB_00603738;
      }
      else {
        iVar3 = FUN_00609360(local_24);
        if (iVar3 != 0) {
          FUN_00609280(local_24,param_3,param_4,param_5,param_6);
          goto LAB_00603738;
        }
      }
      if ((param_7 != 0) || (bVar1)) {
        FUN_00609280(local_24,param_3,param_4,param_5,param_6);
        FUN_006093f0(local_24,param_8 == 0);
      }
      else {
        iVar2 = -0x7ff8fffb;
      }
    }
  }
LAB_00603738:
  FUN_00609460(local_20);
  if (local_24 != (HKEY)0x0) {
    RegCloseKey(local_24);
  }
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
  if (local_20 != (HKEY)0x0) {
    RegCloseKey(local_20);
  }
  return iVar2;
}


