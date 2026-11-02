/* Module: vidpcore.dll
   Function: FUN_5df0e7c0
   Address: 5df0e7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5df0e7c0(int param_1,char *param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  HKEY local_24;
  HKEY local_20;
  HKEY local_1c;
  CHAR local_18 [24];
  
  local_24 = (HKEY)0x0;
  local_1c = (HKEY)0x0;
  local_20 = (HKEY)0x0;
  pcVar3 = "00-95J86R-7XN4TW-0JM6GN";
  iVar1 = lstrcmpA(param_3,"3");
  if (iVar1 == 0) {
    pcVar3 = "00-8TW00R-XXHG34-P0NNRT";
  }
  iVar1 = lstrcmpA(param_3,"15");
  if (iVar1 == 0) {
LAB_5df0e80f:
    if (*(int *)(param_1 + 0x7e0) == 0) {
      return -0x7ff8ffa9;
    }
    wsprintfA(local_18,"00-T8Y5QK-E3%04X-L9MGNK",*(int *)(param_1 + 0x7e0));
    pcVar3 = local_18;
  }
  else {
    iVar1 = lstrcmpA(param_3,"16");
    if (iVar1 == 0) goto LAB_5df0e80f;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = param_2;
  }
  iVar1 = FUN_5df137f0(*(undefined4 *)(param_1 + 0x30),&local_24,param_1 + 0x797,0x2e);
  if (iVar1 < 0) {
    iVar1 = FUN_5df13370(*(undefined4 *)(param_1 + 0x30),&local_24,param_1 + 0x797,0x2e);
    if (iVar1 < 0) goto LAB_5df0e8f9;
  }
  iVar1 = FUN_5df142b0(local_24);
  if (iVar1 == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_5df13e30(local_24,&local_1c);
    if (iVar1 < 0) {
      iVar1 = -0x7ff8fffb;
    }
    else {
      iVar1 = FUN_5df13e80(local_1c,pcVar3,&local_20);
      if (-1 < iVar1) {
        iVar1 = FUN_5df13f80(local_20,param_3,param_4,param_5,param_6);
        if (-1 < iVar1) {
          iVar2 = FUN_5df14170(local_20);
          if (iVar2 != 0) {
            iVar1 = 0x4e133;
          }
        }
      }
    }
  }
LAB_5df0e8f9:
  if (local_20 != (HKEY)0x0) {
    RegCloseKey(local_20);
  }
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
  if (local_24 != (HKEY)0x0) {
    RegCloseKey(local_24);
  }
  return iVar1;
}


