/* Module: vegas30.exe
   Function: FUN_00508a60
   Address: 00508a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508a60(LPCSTR param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar2 = DAT_0064b464;
  if ((DAT_0064b464 != (int *)0x0) && (param_1 != (LPCSTR)0x0)) {
    iVar1 = *DAT_0064b464;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar5 = (undefined4 *)(piVar2[1] * iVar4 + piVar2[2]);
        iVar3 = lstrcmpA((LPCSTR)(puVar5 + 10),param_1);
        if (iVar3 == 0) {
          *param_2 = *puVar5;
          param_2[1] = puVar5[1];
          param_2[2] = puVar5[2];
          param_2[3] = puVar5[3];
          return 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return 0;
}


