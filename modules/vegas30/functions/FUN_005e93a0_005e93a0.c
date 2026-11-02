/* Module: vegas30.exe
   Function: FUN_005e93a0
   Address: 005e93a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e93a0(int param_1,int param_2,int *param_3,int *param_4)

{
  LPCSTR lpString1;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  int local_4;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar2 = FUN_005ec620();
  iVar4 = param_2;
  if (iVar2 == 0) {
    return -0x7ff8fff2;
  }
  iVar3 = FUN_005bad70(param_2,&local_4);
  if (iVar3 < 0) {
    return iVar3;
  }
  local_8 = 0;
  iVar4 = FUN_005c4410(iVar4,iVar2,&local_8,0,0,0,1,1);
  if (iVar4 < 0) {
    return iVar4;
  }
  lpString1 = (LPCSTR)(local_8 + 0x170);
  iVar4 = -0x7fffbffb;
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    puVar5 = *(undefined4 **)(param_1 + 0x1ec);
    iVar4 = -0x7ffb1ff6;
    bVar1 = *(byte *)(puVar5 + 6);
    while ((bVar1 & 2) != 2) {
      iVar2 = lstrcmpiA(lpString1,(LPCSTR)*puVar5);
      if (iVar2 == 0) break;
      if (iVar2 < 0) {
        puVar5 = (undefined4 *)puVar5[4];
      }
      else {
        puVar5 = (undefined4 *)puVar5[5];
      }
      bVar1 = *(byte *)(puVar5 + 6);
    }
    if ((*(byte *)(puVar5 + 6) & 2) != 2) {
      iVar4 = 0;
    }
  }
  if (iVar4 == -0x7ffb1ff6) {
    iVar4 = FUN_005ebfb0(local_8);
    if (iVar4 < 0) goto LAB_005e94ba;
    FUN_005ed3f0(local_8);
  }
  if (((-1 < iVar4) && (iVar4 = FUN_005bad70(param_2,&param_2), -1 < iVar4)) &&
     (param_3 != (int *)0x0)) {
    *param_3 = param_2 - local_4;
  }
LAB_005e94ba:
  if (param_4 != (int *)0x0) {
    *param_4 = local_8;
  }
  return iVar4;
}


