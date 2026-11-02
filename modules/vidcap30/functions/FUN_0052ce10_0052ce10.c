/* Module: vidcap30.exe
   Function: FUN_0052ce10
   Address: 0052ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t FUN_0052ce10(undefined4 *param_1,uint param_2,size_t param_3,int *param_4)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_2;
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  sVar1 = 0;
  if (param_4 != (int *)0x0) {
    iVar2 = *param_4;
    if (iVar2 == 0) {
      if ((FILE *)param_4[1] != (FILE *)0x0) {
        sVar1 = fread(param_1,param_2,param_3,(FILE *)param_4[1]);
      }
    }
    else {
      if (iVar2 == 1) {
        iVar2 = param_4[2] - param_4[1];
        if ((int)(param_2 * param_3) < iVar2) {
          iVar2 = param_2 * param_3;
        }
        sVar1 = iVar2 / (int)param_2;
        if (0 < (int)sVar1) {
          param_2 = sVar1 * param_2;
          puVar4 = (undefined4 *)(param_4[3] + param_4[1]);
          for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *param_1 = *puVar4;
            puVar4 = puVar4 + 1;
            param_1 = param_1 + 1;
          }
          for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)param_1 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            param_1 = (undefined4 *)((int)param_1 + 1);
          }
          param_4[1] = param_4[1] + param_2;
        }
        return sVar1;
      }
      if (iVar2 == 2) {
        param_2 = 0;
        ReadFile((HANDLE)param_4[1],param_1,uVar3 * param_3,&param_2,(LPOVERLAPPED)0x0);
        return (param_2 / uVar3) * uVar3;
      }
    }
  }
  return sVar1;
}


