/* Module: vidcap30.exe
   Function: FUN_00572640
   Address: 00572640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00572640(int param_1,char *param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
LAB_0057268f:
    if (*(int *)(param_1 + 0x7e0) == 0) {
      return -0x7ff8ffa9;
    }
    wsprintfA(local_18,"00-T8Y5QK-E3%04X-L9MGNK",*(int *)(param_1 + 0x7e0));
    pcVar3 = local_18;
  }
  else {
    iVar1 = lstrcmpA(param_3,"16");
    if (iVar1 == 0) goto LAB_0057268f;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = param_2;
  }
  iVar1 = FUN_00577c00(*(undefined4 *)(param_1 + 0x30),&local_24,param_1 + 0x797,0x2e);
  if (iVar1 < 0) {
    iVar1 = FUN_00577780(*(undefined4 *)(param_1 + 0x30),&local_24,param_1 + 0x797,0x2e);
    if (iVar1 < 0) goto LAB_00572779;
  }
  iVar1 = FUN_005786c0(local_24);
  if (iVar1 == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_00578240(local_24,&local_1c);
    if (iVar1 < 0) {
      iVar1 = -0x7ff8fffb;
    }
    else {
      iVar1 = FUN_00578290(local_1c,pcVar3,&local_20);
      if (-1 < iVar1) {
        iVar1 = FUN_00578390(local_20,param_3,param_4,param_5,param_6);
        if (-1 < iVar1) {
          iVar2 = FUN_00578580(local_20);
          if (iVar2 != 0) {
            iVar1 = 0x4e133;
          }
        }
      }
    }
  }
LAB_00572779:
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


