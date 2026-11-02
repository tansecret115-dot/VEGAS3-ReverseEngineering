/* Module: vegas30.exe
   Function: FUN_0050aaa0
   Address: 0050aaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050aaa0(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = lstrlenA((LPCSTR)param_1);
  if (0xd < uVar1) {
    iVar4 = 0xd;
    pcVar6 = "-Sonic Foundry";
    bVar7 = false;
    iVar2 = 0;
    bVar8 = true;
    pbVar5 = param_1;
    do {
      pcVar6 = pcVar6 + 1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pbVar5 < (byte)*pcVar6;
      bVar8 = *pbVar5 == *pcVar6;
      pbVar5 = pbVar5 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar2 == 0) {
      pbVar5 = param_1 + 0xd;
      param_1 = param_1 + 0xd;
      uVar3 = 1;
      if (*pbVar5 != 0) {
        do {
          FUN_0060ac30();
          FUN_0060ac30();
          lstrcpynA(&stack0xfffffff0," ",2);
          lstrcpynA(&stack0xfffffff0,(LPCSTR)param_1,2);
          iVar2 = lstrcmpA(&stack0xfffffff0,&stack0xfffffff0);
          if (iVar2 != 0) {
            *param_2 = param_1;
            return 1;
          }
          pbVar5 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (*pbVar5 != 0);
        *param_2 = param_1;
        return 1;
      }
      goto LAB_0050ab4d;
    }
  }
  uVar3 = 0;
LAB_0050ab4d:
  *param_2 = param_1;
  return uVar3;
}


