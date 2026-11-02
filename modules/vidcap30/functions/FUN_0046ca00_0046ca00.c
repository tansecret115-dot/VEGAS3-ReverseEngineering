/* Module: vidcap30.exe
   Function: FUN_0046ca00
   Address: 0046ca00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046ca00(undefined4 param_1,LPCRITICAL_SECTION param_2,int *param_3,int param_4,int param_5,
                undefined4 param_6,int *param_7,uint *param_8,uint param_9,uint *param_10,
                uint param_11)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int unaff_EDI;
  int iVar6;
  undefined4 unaff_retaddr;
  LPCRITICAL_SECTION p_Stack_1c;
  int *piStack_18;
  int *piStack_14;
  
  piVar2 = param_7;
  param_1 = (LPCRITICAL_SECTION)(param_7 + 1);
  piStack_14 = (int *)0x46ca15;
  EnterCriticalSection(param_1);
  puVar3 = param_8;
  param_7 = (int *)0x0;
  if (param_8 != (uint *)0x0) {
    piStack_14 = (int *)param_8[1];
    piStack_18 = (int *)*param_8;
    p_Stack_1c = (LPCRITICAL_SECTION)&DAT_005a2498;
    (**(code **)(*piVar2 + 0x34))(piVar2,param_8);
  }
  puVar4 = param_10;
  if (param_10 != (uint *)0x0) {
    piStack_14 = (int *)param_10[1];
    piStack_18 = (int *)*param_10;
    p_Stack_1c = (LPCRITICAL_SECTION)&DAT_005a2498;
    (**(code **)(*piVar2 + 0x34))(piVar2,param_10);
  }
  uVar5 = param_11 & 3;
  if (uVar5 == 1) {
    if (puVar4 == (uint *)0x0) {
      param_7 = (int *)0x80004003;
      goto LAB_0046cd0e;
    }
    piStack_14 = piVar2;
    piStack_18 = (int *)0x46cb40;
    (**(code **)(*piVar2 + 0x28))();
    piStack_18 = piVar2 + 0x5a;
    p_Stack_1c = param_1;
    (**(code **)(*piVar2 + 0x34))(piVar2,&stack0x00000000,&DAT_005a2498,unaff_retaddr);
    if ((param_2 != (LPCRITICAL_SECTION)*puVar4) || (param_3 != (int *)puVar4[1])) {
      param_7 = (int *)0x80070057;
      goto LAB_0046cd0e;
    }
  }
  else if (uVar5 == 2) {
    if (puVar4 == (uint *)0x0) {
      param_7 = (int *)0x80004003;
      goto LAB_0046cd0e;
    }
    if ((*puVar4 != 0) || (puVar4[1] != 0)) {
      param_7 = (int *)0x80070057;
      goto LAB_0046cd0e;
    }
  }
  else if (uVar5 == 3) {
    if (puVar4 == (uint *)0x0) {
      param_7 = (int *)0x80004003;
      goto LAB_0046cd0e;
    }
    if (puVar3 == (uint *)0x0) {
      param_7 = (int *)0x80004003;
      goto LAB_0046cd0e;
    }
    piStack_14 = piVar2;
    piStack_18 = (int *)0x46caab;
    (**(code **)(*piVar2 + 0x28))();
    piStack_18 = piVar2 + 0x5a;
    p_Stack_1c = param_1;
    (**(code **)(*piVar2 + 0x34))(piVar2,&stack0x00000000,&DAT_005a2498,unaff_retaddr);
    if (((LPCRITICAL_SECTION)(*puVar3 + *puVar4) != param_2) ||
       ((int *)(puVar3[1] + puVar4[1] + (uint)CARRY4(*puVar3,*puVar4)) != param_3)) {
      param_7 = (int *)0x80070057;
      goto LAB_0046cd0e;
    }
  }
  if (unaff_EDI == 1) {
    if (puVar3 == (uint *)0x0) {
      param_7 = (int *)0x80004003;
      goto LAB_0046cd0e;
    }
    iVar6 = piVar2[-0x1d];
LAB_0046cbef:
    piStack_14 = piVar2 + -0x1d;
    piStack_18 = (int *)0x46cbf3;
    param_7 = (int *)(**(code **)(iVar6 + 0x48))();
    if ((int)param_7 < 0) goto LAB_0046cd0e;
  }
  else {
    if (unaff_EDI == 2) {
      if (puVar3 == (uint *)0x0) {
        param_7 = (int *)0x80004003;
        goto LAB_0046cd0e;
      }
      param_4 = piVar2[0x2f] + *puVar3;
      iVar6 = piVar2[-0x1d];
      param_5 = piVar2[0x30] + puVar3[1] + (uint)CARRY4(piVar2[0x2f],*puVar3);
      goto LAB_0046cbef;
    }
    if (unaff_EDI == 3) {
      param_7 = (int *)0x80070057;
      goto LAB_0046cd0e;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)piVar2[-0xf];
  piStack_14 = (int *)0x46cc09;
  EnterCriticalSection(lpCriticalSection);
  if ((piVar2[-0x18] == 1) || (param_11 = 0, piVar2[-0x18] == 2)) {
    param_11 = 1;
  }
  piStack_14 = (int *)0x46cc2f;
  LeaveCriticalSection(lpCriticalSection);
  if (param_11 != 0) {
    piStack_14 = &param_4;
    piStack_18 = piVar2;
    p_Stack_1c = (LPCRITICAL_SECTION)0x46cc4b;
    (**(code **)(*piVar2 + 0x3c))();
    p_Stack_1c = (LPCRITICAL_SECTION)0x0;
    (**(code **)(*piVar2 + 0x34))(piVar2,&param_1,&DAT_005a2458,param_1,param_2);
    (**(code **)(*piVar2 + 0x34))(piVar2,&p_Stack_1c,&DAT_005a2458,p_Stack_1c,piStack_18,0);
    piStack_14 = (int *)0x46cc8a;
    LeaveCriticalSection(param_1);
    iVar6 = 0;
    if (0 < piVar2[-9]) {
      do {
        iVar1 = *(int *)(piVar2[-8] + iVar6 * 4);
        if (*(int *)(iVar1 + 0x60) != 0) {
          (**(code **)(*(int *)(iVar1 + 0x48) + 0x50))();
          piStack_14 = (int *)0x46ccb6;
          FUN_00582780();
          (**(code **)(*(int *)(*(int *)(piVar2[-8] + iVar6 * 4) + 0x48) + 0x54))();
          piStack_14 = (int *)0x46ccd2;
          FUN_00582780();
          piStack_14 = (int *)0x0;
          piStack_18 = param_3;
          p_Stack_1c = param_2;
          (**(code **)(*(int *)(*(int *)(piVar2[-8] + iVar6 * 4) + 0x48) + 0x58))(param_4,param_5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < piVar2[-9]);
    }
    piStack_14 = (int *)0x46cd0e;
    EnterCriticalSection(param_1);
  }
LAB_0046cd0e:
  if ((param_9 & 8) == 0) {
    if (puVar4 != (uint *)0x0) {
      piStack_14 = (int *)puVar4[1];
      piStack_18 = (int *)*puVar4;
      p_Stack_1c = (LPCRITICAL_SECTION)(piVar2 + 0x5a);
      (**(code **)(*piVar2 + 0x34))(piVar2,puVar4);
    }
    if (puVar3 != (uint *)0x0) {
      piStack_14 = (int *)puVar3[1];
      piStack_18 = (int *)*puVar3;
      p_Stack_1c = (LPCRITICAL_SECTION)(piVar2 + 0x5a);
      (**(code **)(*piVar2 + 0x34))(piVar2,puVar3);
    }
  }
  else {
    if (puVar4 != (uint *)0x0) {
      piStack_14 = (int *)puVar4[1];
      piStack_18 = (int *)*puVar4;
      p_Stack_1c = (LPCRITICAL_SECTION)&DAT_005a2458;
      (**(code **)(*piVar2 + 0x34))(piVar2,puVar4);
    }
    if (puVar3 != (uint *)0x0) {
      piStack_14 = (int *)puVar3[1];
      piStack_18 = (int *)*puVar3;
      p_Stack_1c = (LPCRITICAL_SECTION)&DAT_005a2458;
      (**(code **)(*piVar2 + 0x34))(piVar2,puVar3);
    }
  }
  piStack_14 = (int *)0x46cd9c;
  LeaveCriticalSection(param_1);
  return (int)param_7;
}


