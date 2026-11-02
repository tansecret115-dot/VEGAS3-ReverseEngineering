/* Module: vegas30.exe
   Function: FUN_00563970
   Address: 00563970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005639cd) */
/* WARNING: Removing unreachable block (ram,0x005639d6) */

int FUN_00563970(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_30;
  undefined4 local_24 [3];
  int iStack_18;
  LPCSTR pCStack_14;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  local_24[0] = 0;
  piStack_30 = (int *)&DAT_0061b3b0;
  piVar6 = DAT_0064b510;
  iVar2 = (**(code **)(*DAT_0064b510 + 0x54))(DAT_0064b510,local_24);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(*piStack_30 + 0x10))(piStack_30);
    ppiVar4 = &piStack_30;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppiVar4 = (int *)0x0;
      ppiVar4 = ppiVar4 + 1;
    }
    piStack_30 = (int *)0x20;
    iVar2 = (**(code **)(*DAT_0064b510 + 0x74))(DAT_0064b510,uVar3,uStack_c,1,&piStack_30,0,0,0,1);
    if (-1 < iVar2) {
      piVar5 = piStack_30;
      (**(code **)(*piStack_30 + 0x44))(piStack_30,0);
      (**(code **)(*piVar6 + 0x60))(piVar6,auStack_10);
      iVar1 = iStack_18;
      MultiByteToWideChar(0,1,pCStack_14,-1,(LPWSTR)(iStack_18 + 0x14),0x104);
      *(undefined2 *)(iVar1 + 0x21a) = 0;
      (**(code **)(*piVar5 + 100))(piVar5,iStack_18);
      piVar5 = (int *)0x0;
      (**(code **)(*DAT_0064b510 + 0x6c))(DAT_0064b510,piVar6,0,1);
      (**(code **)(*piVar5 + 0x68))(piVar5,piStack_30);
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))(piStack_30);
  }
  return iVar2;
}


