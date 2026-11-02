/* Module: encn3260.dll
   Function: FUN_664bf500
   Address: 664bf500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bf500(char *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int local_58 [7];
  undefined4 local_3c [5];
  int local_28 [4];
  char *local_18 [3];
  int local_c;
  
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_664c45c0(local_3c,(undefined4 *)param_1,~uVar5 - 1);
  FUN_664c4750(local_58,local_3c);
  FUN_664c4790(local_58,local_18,&DAT_664e258c);
  while( true ) {
    bVar2 = false;
    iVar6 = 0;
    if (0 < *(int *)(local_18[0] + -8)) {
      do {
        iVar3 = isspace((int)local_18[0][iVar6]);
        if (iVar3 == 0) {
          bVar2 = true;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_18[0] + -8));
    }
    if (!bVar2) break;
    FUN_664becb0(local_18[0],param_2);
    if (((char)local_c == '\n') || ((char)local_c == -1)) break;
    piVar4 = FUN_664c4790(local_58,local_28,&DAT_664e258c);
    FUN_664bb570(local_18,piVar4);
    local_c = piVar4[3];
    FUN_664bb3e0(local_28);
  }
  FUN_664bb3e0((int *)local_18);
  FUN_664c4770(local_58);
  FUN_664c0180(local_3c);
  return 0;
}


