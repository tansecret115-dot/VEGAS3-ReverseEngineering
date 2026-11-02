/* Module: vegas30.exe
   Function: FUN_005ee930
   Address: 005ee930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ee930(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar6 = 1;
  local_4 = 1;
  iVar2 = _SfGetMetricBool_12(DAT_00647200,0xe80,0);
  if (iVar2 == 0) {
    pcVar3 = (char *)FUN_005bad20(param_1);
    iVar2 = FUN_005ec620();
    if ((pcVar3 != (char *)0x0) && (iVar2 != 0)) {
      iVar2 = 0;
      local_8 = 0;
      if (*pcVar3 == '\0') goto LAB_005ee9bf;
      iVar2 = *(int *)(pcVar3 + 8);
      if ((*(byte *)(iVar2 + 0x18) & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
        iVar4 = *(int *)(iVar2 + 0x10);
        while ((bVar1 & 2) != 2) {
          bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
          iVar2 = iVar4;
          iVar4 = *(int *)(iVar4 + 0x10);
        }
      }
      do {
        if (*pcVar3 == '\0') {
LAB_005ee9bf:
          iVar4 = 0;
          iVar5 = iVar2;
        }
        else {
          iVar4 = *(int *)(pcVar3 + 0xc);
          iVar5 = iVar2;
        }
        if (iVar5 == iVar4) {
          return uVar6;
        }
        FUN_005ed450(iVar5);
        iVar2 = *(int *)(iVar5 + 4);
        local_c = 0;
        FUN_005f3120(&local_c,0,0);
        if ((local_c == 0x4e016) || (local_c == -0x7ffb1f7a)) {
          if (local_8 == 0) {
            FUN_005ee7d0(iVar2 + 0x170,local_c);
            local_8 = 1;
          }
          FUN_005f0120(0);
          FUN_005effc0(1);
          local_4 = 0;
        }
        iVar2 = iVar5;
        if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x18) & 2) != 2)) {
          iVar2 = *(int *)(iVar5 + 0x14);
          iVar4 = iVar5;
          if ((*(byte *)(iVar2 + 0x18) & 2) == 2) {
            do {
              iVar2 = *(int *)(iVar4 + 0xc);
              if (*(int *)(iVar2 + 0x10) == iVar4) break;
              iVar4 = iVar2;
            } while ((*(byte *)(iVar2 + 0x18) & 2) != 2);
          }
          else {
            bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
            iVar4 = *(int *)(iVar2 + 0x10);
            while ((bVar1 & 2) != 2) {
              bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
              iVar2 = iVar4;
              iVar4 = *(int *)(iVar4 + 0x10);
            }
          }
        }
        FUN_005b83b0(param_1,1);
        FUN_005ed4a0(iVar5,0,0);
        FUN_005b84d0(param_1,1);
        uVar6 = local_4;
      } while( true );
    }
  }
  return 1;
}


