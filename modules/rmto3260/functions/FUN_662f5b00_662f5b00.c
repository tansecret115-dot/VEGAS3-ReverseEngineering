/* Module: rmto3260.dll
   Function: FUN_662f5b00
   Address: 662f5b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f5b00(void *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *local_10 [3];
  
  uVar4 = 0x80004005;
  iVar2 = FUN_662ef820(param_1,PTR_s_PICS_1_1_6630b644);
  if (iVar2 != -1) {
    iVar2 = FUN_662ef820(param_1,PTR_s_http___www_classify_org_safesurf_6630b648);
    if (iVar2 != -1) {
      iVar2 = FUN_662ef820(param_1,PTR_DAT_6630b64c);
      uVar3 = 0xffffffff;
      pcVar5 = PTR_DAT_6630b64c;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_662ef6c0(param_1,local_10,iVar2 + ~uVar3);
      iVar2 = sscanf(local_10[0],&DAT_6630b460,param_2);
      if (iVar2 != 0) {
        uVar4 = 0;
      }
      FUN_662ef0f0((int *)local_10);
    }
  }
  return uVar4;
}


