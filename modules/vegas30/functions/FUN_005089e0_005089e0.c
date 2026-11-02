/* Module: vegas30.exe
   Function: FUN_005089e0
   Address: 005089e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005089e0(LPCSTR param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  if ((DAT_0064b464 != (int *)0x0) && (param_1 != (LPCSTR)0x0)) {
    iVar3 = 0;
    if (0 < *DAT_0064b464) {
      piVar1 = (int *)DAT_0064b464[2];
      do {
        iVar2 = 4;
        bVar6 = true;
        piVar4 = piVar1;
        piVar5 = param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          lstrcpynA((LPSTR)(piVar1 + 10),param_1,0x104);
          *(undefined1 *)((int)piVar1 + 299) = 0;
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar1 = (int *)((int)piVar1 + DAT_0064b464[1]);
      } while (iVar3 < *DAT_0064b464);
    }
  }
  return 0;
}


