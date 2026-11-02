/* Module: vegas30.exe
   Function: FUN_0043a4f0
   Address: 0043a4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043a4f0(undefined4 param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_2b8;
  undefined4 local_2b4 [173];
  
  local_2b8 = 0;
  local_2b4[0] = 0;
  if (0x56 < param_3) {
    param_3 = 0x57;
  }
  iVar3 = FUN_0043a430(param_1,&local_2b8,param_3);
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x14);
    puVar6 = local_2b4;
    iVar7 = iVar3;
    do {
      iVar2 = puVar6[-1];
      iVar4 = iVar2 * 0x14;
      iVar7 = iVar7 + -1;
      *(undefined2 *)(puVar5 + -1) = *(undefined2 *)(&DAT_00610ff8 + iVar4);
      *puVar5 = (&DAT_00610ffc)[iVar2 * 5];
      *(undefined *)(puVar5 + 1) = (&DAT_00611000)[iVar4];
      uVar1 = *(undefined2 *)puVar6;
      *(undefined *)((int)puVar5 + 5) = (&DAT_00611001)[iVar4];
      *(undefined2 *)((int)puVar5 + -2) = uVar1;
      puVar5 = puVar5 + 7;
      puVar6 = puVar6 + 2;
    } while (iVar7 != 0);
    return iVar3;
  }
  return 0;
}


