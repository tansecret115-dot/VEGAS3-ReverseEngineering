/* Module: vidcap30.exe
   Function: FUN_0054cfc0
   Address: 0054cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0054cfc0(undefined4 param_1,byte *param_2,int *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char local_28 [40];
  
  *param_3 = 0;
  if (param_2 != (byte *)0x0) {
    uVar7 = 0xffffffff;
    pbVar6 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar3 != 0);
    uVar8 = ~uVar7 - 1;
    if (uVar8 != 0) {
      pbVar6 = (byte *)FUN_00549470(param_1,~uVar7);
      *param_3 = (int)pbVar6;
      bVar3 = *param_2;
      while (bVar3 != 0) {
        bVar3 = *param_2;
        if (((char)bVar3 < ' ') || (('~' < (char)bVar3 && (bVar3 < 0xa1)))) {
          sprintf(local_28,"invalid keyword character 0x%02X",(int)(char)bVar3);
          FUN_00549670(param_1,local_28);
          *pbVar6 = 0x20;
        }
        else {
          *pbVar6 = bVar3;
        }
        pbVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      *pbVar6 = 0;
      pcVar10 = (char *)(*param_3 + -1 + uVar8);
      if (*(char *)(*param_3 + -1 + uVar8) == ' ') {
        FUN_00549670(param_1,"trailing spaces removed from keyword");
        cVar4 = *pcVar10;
        while (cVar4 == ' ') {
          *pcVar10 = '\0';
          pcVar9 = pcVar10 + -1;
          pcVar10 = pcVar10 + -1;
          uVar8 = uVar8 - 1;
          cVar4 = *pcVar9;
        }
      }
      pcVar10 = (char *)*param_3;
      if (*pcVar10 == ' ') {
        FUN_00549670(param_1,"leading spaces removed from keyword");
        cVar4 = *pcVar10;
        while (cVar4 == ' ') {
          pcVar9 = pcVar10 + 1;
          pcVar10 = pcVar10 + 1;
          uVar8 = uVar8 - 1;
          cVar4 = *pcVar9;
        }
      }
      pcVar9 = (char *)*param_3;
      bVar5 = false;
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        if (cVar4 == ' ') {
          if (bVar5) {
            uVar8 = uVar8 - 1;
            bVar5 = true;
          }
          else {
            *pcVar9 = ' ';
            pcVar9 = pcVar9 + 1;
            bVar5 = true;
          }
        }
        else {
          *pcVar9 = cVar4;
          pcVar9 = pcVar9 + 1;
          bVar5 = false;
        }
        pcVar2 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
        cVar4 = *pcVar2;
      }
      *pcVar9 = '\0';
      if (uVar8 != 0) {
        if (0x4f < uVar8) {
          FUN_00549670(param_1,"keyword length must be 1 - 79 characters");
          param_3[0x4f] = 0;
          uVar8 = 0x4f;
        }
        return uVar8;
      }
      FUN_00549670(param_1,"zero length keyword");
      return 0;
    }
  }
  FUN_00549670(param_1,"zero length keyword");
  return 0;
}


