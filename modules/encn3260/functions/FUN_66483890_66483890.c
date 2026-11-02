/* Module: encn3260.dll
   Function: FUN_66483890
   Address: 66483890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66483890(int *param_1,int *param_2,int *param_3)

{
  void *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if ((((iVar3 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) && (param_2[2] == DAT_664dc5d8)) &&
     (param_2[3] == DAT_664dc5dc)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)(param_1 + -0xc);
    return 0;
  }
  if (((iVar3 == DAT_664dcf50) && (param_2[1] == DAT_664dcf54)) &&
     ((param_2[2] == DAT_664dcf58 && (param_2[3] == DAT_664dcf5c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x30) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else {
    if (((iVar3 == DAT_664dc600) && (param_2[1] == DAT_664dc604)) &&
       ((param_2[2] == DAT_664dc608 && (param_2[3] == DAT_664dc60c)))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x30) {
        *param_3 = (int)(param_1 + 3);
        return 0;
      }
LAB_66483a32:
      *param_3 = 0;
      return 0;
    }
    if ((((iVar3 == DAT_664dc760) && (param_2[1] == DAT_664dc764)) && (param_2[2] == DAT_664dc768))
       && (param_2[3] == DAT_664dc76c)) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x30) {
        *param_3 = (int)(param_1 + 4);
        return 0;
      }
    }
    else {
      if (((iVar3 == DAT_664dc770) && (param_2[1] == DAT_664dc774)) &&
         ((param_2[2] == DAT_664dc778 && (param_2[3] == DAT_664dc77c)))) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x30) {
          *param_3 = (int)(param_1 + 7);
          return 0;
        }
        goto LAB_66483a32;
      }
      if (((iVar3 == DAT_664ddb30) && (param_2[1] == DAT_664ddb34)) &&
         ((param_2[2] == DAT_664ddb38 && (param_2[3] == DAT_664ddb3c)))) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x30) {
          *param_3 = (int)(param_1 + 8);
          return 0;
        }
      }
      else {
        if ((((iVar3 != DAT_664dda30) || (param_2[1] != DAT_664dda34)) ||
            (param_2[2] != DAT_664dda38)) || (param_2[3] != DAT_664dda3c)) {
          this = *(void **)((int)param_1 + 0x102);
          if ((this != (void *)0x0) && (*(int *)((int)this + 8) != 0)) {
            piVar1 = FUN_664bbe00(this,0);
            if (*piVar1 != 0) {
              puVar2 = FUN_664bbe00(*(void **)((int)param_1 + 0x102),0);
              iVar3 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,param_2,param_3);
              if (iVar3 == 0) {
                return 0;
              }
            }
          }
          *param_3 = 0;
          return 0x80004002;
        }
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x30) {
          *param_3 = (int)(param_1 + 5);
          return 0;
        }
      }
    }
  }
  *param_3 = 0;
  return 0;
}


