/* Module: rmbe3260.dll
   Function: FUN_6604eaa0
   Address: 6604eaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6604eaa0(void *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *local_10 [3];
  
  uVar4 = 0x80004005;
  iVar2 = FUN_6605bfa0(param_1,PTR_s_PICS_1_1_6606eccc);
  if (iVar2 != -1) {
    iVar2 = FUN_6605bfa0(param_1,PTR_s_http___www_classify_org_safesurf_6606ecd0);
    if (iVar2 != -1) {
      iVar2 = FUN_6605bfa0(param_1,PTR_DAT_6606ecd4);
      uVar3 = 0xffffffff;
      pcVar5 = PTR_DAT_6606ecd4;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_6605be40(param_1,local_10,iVar2 + ~uVar3);
      iVar2 = sscanf(local_10[0],&DAT_6606ee14,param_2);
      if (iVar2 != 0) {
        uVar4 = 0;
      }
      FUN_6605b770((int *)local_10);
    }
  }
  return uVar4;
}


