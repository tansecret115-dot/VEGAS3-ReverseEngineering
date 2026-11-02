/* Module: vidcap30.exe
   Function: FUN_0046fdd0
   Address: 0046fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046fdd0(LPCSTR param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  char *local_4;
  
  local_4 = (char *)FUN_0046ed20();
  iVar3 = -0x7fffbffb;
  local_8 = 0;
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    local_8 = 0;
    iVar3 = -0x7fffbffb;
    if (*local_4 != '\0') {
      puVar4 = *(undefined4 **)(local_4 + 8);
      iVar3 = -0x7ffb1ff6;
      bVar1 = *(byte *)(puVar4 + 6);
      while ((bVar1 & 2) != 2) {
        iVar2 = lstrcmpiA(param_1,(LPCSTR)*puVar4);
        if (iVar2 == 0) break;
        if (iVar2 < 0) {
          puVar4 = (undefined4 *)puVar4[4];
        }
        else {
          puVar4 = (undefined4 *)puVar4[5];
        }
        bVar1 = *(byte *)(puVar4 + 6);
      }
      if ((*(byte *)(puVar4 + 6) & 2) != 2) {
        local_8 = puVar4[1];
        iVar3 = 0;
      }
    }
    if ((iVar3 < 0) && (iVar3 = FUN_0046efd0(param_1,&local_8,param_3,param_4), -1 < iVar3)) {
      FUN_0046fb20(local_8);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_8;
  }
  return iVar3;
}


