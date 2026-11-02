/* Module: erv33260.dll
   Function: FUN_67081dc0
   Address: 67081dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67081dc0(void *this,uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte local_ac [4];
  int local_a8 [31];
  byte local_2c [32];
  uint local_c;
  int local_8;
  
  iVar4 = param_1 * 0xc;
  bVar1 = *(byte *)(iVar4 + 6 + *(int *)((int)this + 0x8c));
  if (bVar1 < 2) {
LAB_67081e02:
    if (bVar1 < 9) goto switchD_67081e07_switchD;
switchD_67081e07_caseD_7:
    iVar6 = 0;
    iVar2 = -1;
  }
  else {
    if (bVar1 != 8) {
      FUN_6707f380(this,param_1,local_2c,local_ac);
      goto LAB_67081e02;
    }
switchD_67081e07_switchD:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar1) {
    case 0:
      iVar6 = 0;
      iVar2 = 4;
      break;
    case 1:
      iVar6 = 0;
      iVar2 = 5;
      break;
    case 2:
      iVar2 = 1;
      iVar6 = 1;
      break;
    case 3:
      iVar2 = 2;
      iVar6 = 4;
      break;
    case 4:
      iVar2 = 3;
      iVar6 = 0x10;
      break;
    case 5:
      iVar2 = 2;
      iVar6 = 1;
      break;
    case 6:
      iVar2 = 3;
      iVar6 = 1;
      break;
    case 7:
      goto switchD_67081e07_caseD_7;
    case 8:
      iVar2 = 1;
      iVar6 = 0;
    }
  }
  if ((uint)*(byte *)(iVar4 + 4 + *(int *)((int)this + 0x8c)) != *(uint *)((int)this + 0x13c)) {
    iVar2 = iVar2 + 5;
  }
  FUN_67081d40(iVar2,&local_8,(int *)&param_1);
  FUN_6707d750(*(void **)((int)this + 4),param_1,local_8);
  uVar3 = (uint)*(byte *)(iVar4 + 4 + *(int *)((int)this + 0x8c));
  if (uVar3 != *(uint *)((int)this + 0x13c)) {
    FUN_6707af90(*(void **)((int)this + 4),uVar3,*(uint *)((int)this + 0x13c),1);
    *(uint *)((int)this + 0x13c) = (uint)*(byte *)(iVar4 + 4 + *(int *)((int)this + 0x8c));
  }
  if (iVar6 != 0) {
    piVar5 = local_a8;
    do {
      iVar4 = piVar5[-1];
      if (iVar4 == 0) {
        FUN_6707d6f0(*(int *)((int)this + 4),1,1);
      }
      else {
        iVar2 = iVar4;
        if (iVar4 < 0) {
          iVar2 = -iVar4;
        }
        local_c = CONCAT31(local_c._1_3_,iVar4 < 0);
        FUN_67081d40(iVar2 * 2 + -1,&local_8,(int *)&param_1);
        param_1 = param_1 + (local_c & 0xff);
        FUN_6707d750(*(void **)((int)this + 4),param_1,local_8);
      }
      iVar4 = *piVar5;
      if (iVar4 == 0) {
        FUN_6707d6f0(*(int *)((int)this + 4),1,1);
      }
      else {
        iVar2 = iVar4;
        if (iVar4 < 0) {
          iVar2 = -iVar4;
        }
        local_c = CONCAT31(local_c._1_3_,iVar4 < 0);
        FUN_67081d40(iVar2 * 2 + -1,&local_8,(int *)&param_1);
        param_1 = param_1 + (local_c & 0xff);
        FUN_6707d750(*(void **)((int)this + 4),param_1,local_8);
      }
      piVar5 = piVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


