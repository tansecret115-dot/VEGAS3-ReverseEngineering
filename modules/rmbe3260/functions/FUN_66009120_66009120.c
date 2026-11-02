/* Module: rmbe3260.dll
   Function: FUN_66009120
   Address: 66009120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66009120(void *this,undefined4 param_1,int *param_2,char *param_3,byte *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9
            ,int *param_10)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  XPNWizardPage *pXVar4;
  int *piVar5;
  CHAR local_124 [256];
  int local_24 [3];
  char *local_18 [3];
  int local_c;
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0x48) = param_6;
  *(int **)((int)this + 0x44) = param_2;
  FUN_6605b970((undefined4 *)((int)this + 0x34),param_3);
  piVar1 = (int *)((int)this + 0x30);
  FUN_6604ee00((void *)((int)this + 0x18),8,s_RNCreateInstance_6606c3c4,(int)piVar1);
  if (*piVar1 != 0) {
    local_8 = 6;
    param_6 = 0;
    FUN_6605b650(local_18);
    FUN_6605b650(local_24);
    FUN_6604ed90(0,local_18,local_24,&local_8,&param_6);
    iVar2 = FUN_66051b60(local_18[0],param_4,local_8,param_6);
    *(int *)((int)this + 0x40) = iVar2;
    if (iVar2 != 0) {
      wsprintfA(local_124,"Configuration of %s",param_3);
      if (this == (void *)0x0) {
        local_c = 0;
      }
      else {
        local_c = (int)this + 0x14;
      }
      (**(code **)(*(int *)*piVar1 + 0xc))
                ((int *)*piVar1,param_5,param_1,param_7,local_124,local_c,param_4,param_8,0,0);
      (**(code **)(*(int *)*piVar1 + 0x14))((int *)*piVar1,*(undefined4 *)((int)this + 0x34));
      (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,s_6_0_11_201_6606c3b8);
      param_2 = (int *)0x0;
      (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_660662a8,&param_2);
      piVar5 = param_9;
      if (param_2 != (int *)0x0) {
        if ((param_9 == (int *)0x0) && (param_10 == (int *)0x0)) {
          *(undefined4 *)((int)this + 0x4c) = 1;
        }
        else {
          *(undefined4 *)((int)this + 0x4c) = 0;
        }
        (**(code **)(*(int *)*piVar1 + 0x3c))((int *)*piVar1);
        if (piVar5 != (int *)0x0) {
          pvVar3 = operator_new(0x110);
          if (pvVar3 == (void *)0x0) {
            pXVar4 = (XPNWizardPage *)0x0;
          }
          else {
            pXVar4 = FUN_660099e0(pvVar3,0x5dd013e,local_124,piVar5,this);
          }
          *(XPNWizardPage **)((int)this + 0x54) = pXVar4;
          FUN_6605b970(pXVar4 + 0xfc,param_3);
          piVar5 = (int *)(*(int *)((int)this + 0x54) + 0xd0);
          (**(code **)(*piVar5 + 4))(piVar5);
          if (*(int *)((int)this + 0x54) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)((int)this + 0x54) + 0xd0;
          }
          (**(code **)(*param_2 + 0xc))(param_2,iVar2,1,1);
        }
        piVar5 = param_10;
        if (param_10 != (int *)0x0) {
          iVar2 = FUN_6604ec20();
          if (iVar2 != 0) {
            pvVar3 = operator_new(0x128);
            if (pvVar3 == (void *)0x0) {
              pXVar4 = (XPNWizardPage *)0x0;
            }
            else {
              pXVar4 = FUN_66009e60(pvVar3,0x5dd013f,local_124,piVar5,this);
            }
            *(XPNWizardPage **)((int)this + 0x58) = pXVar4;
            FUN_6605b970(pXVar4 + 0x100,param_3);
            piVar5 = (int *)(*(int *)((int)this + 0x58) + 0xd0);
            (**(code **)(*piVar5 + 4))(piVar5);
            if (*(int *)((int)this + 0x58) == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)((int)this + 0x58) + 0xd0;
            }
            (**(code **)(*param_2 + 0xc))(param_2,iVar2,1,1);
          }
        }
        (**(code **)(*(int *)*piVar1 + 0x40))((int *)*piVar1);
        (**(code **)(*param_2 + 8))(param_2);
        FUN_6605b770(local_24);
        FUN_6605b770((int *)local_18);
        return 1;
      }
    }
    FUN_6605b770(local_24);
    FUN_6605b770((int *)local_18);
  }
  return 0;
}


