/* Module: sfppack3.dll
   Function: FUN_5cc3f670
   Address: 5cc3f670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc3f670(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint unaff_retaddr;
  void *local_4;
  
  pHVar2 = param_4;
  uVar4 = param_3;
  local_4 = this;
  if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      if (*(int *)((int)this + 0x2c) != 0) {
        uVar6 = param_3 & 0xffff;
        if ((0x9e33 < uVar6) && (uVar6 < 41000)) {
          FUN_5cc3f410((int)this);
          uVar6 = 0;
        }
        if (uVar6 == 0x7fbc) {
          if (uVar4 >> 0x10 == 100) {
            uVar6 = 0;
          }
        }
        else {
          if (uVar6 == 41000) {
            FUN_5cc654c0(1,param_1,0,0,(uchar *)0x0);
            (**(code **)(*(int *)this + 0x54))(41000);
            return 1;
          }
          if (uVar6 == 0xa029) {
            bVar7 = DAT_5cc982c0 == 0;
            FUN_5cc31ce0(param_1);
            piVar1 = *(int **)((int)this + 0x2c);
            bVar8 = DAT_5cc982c0 == 0;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x24))(piVar1,bVar8);
              (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(*(int **)((int)this + 0x2c),0);
            }
            if ((!bVar8) && (bVar7)) {
              FUN_5cc3f1b0(*(HWND *)((int)this + 0x14),2);
              (**(code **)(*(int *)this + 0x54))(0xa029);
              return 1;
            }
          }
        }
        (**(code **)(*(int *)this + 0x54))(uVar6);
      }
      return 1;
    }
    if (param_2 < 0x54) {
      if (param_2 == 0x53) {
        FUN_5cc652b0(0,param_1,0,param_4[2].unused,(int *)&DAT_5cc88888,(uchar *)0x0);
        return 1;
      }
      if (param_2 == 2) {
        piVar1 = *(int **)((int)this + 0x2c);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x18))(piVar1,*(undefined4 *)((int)this + 0x14),0);
        }
        FUN_5cc654c0(0,*(HWND *)((int)this + 0x14),0,0,(uchar *)0x0);
        *(undefined4 *)((int)this + 0x14) = 0;
        return 0;
      }
      if (param_2 == 0x14) {
        FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_1,(int *)&param_3,2);
        pHVar2 = param_1;
        DAT_5cc982cc = 0;
        iVar3 = FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_2,(int *)&param_4,2);
        if (-1 < iVar3) {
          DAT_5cc982cc = (uint)param_4 & 0xff;
        }
        if ((pHVar2 == (HWND)0x0) || (uVar4 = 1, (int)DAT_5cc982cc < 1)) {
          uVar4 = FUN_5cc4bfe0();
        }
        DAT_5cc982c0 = uVar4;
        FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_1,(int *)&param_4,2);
        DAT_5cc982c4 = param_1;
        piVar1 = *(int **)((int)this + 0x2c);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x24))(piVar1,DAT_5cc982c0 == 0);
          (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(*(int **)((int)this + 0x2c),0);
          return 0;
        }
      }
    }
    else {
      if (param_2 == 0x7b) {
        FUN_5cc3f570(this,param_1,param_3,(int)(short)param_4,(int)(short)((uint)param_4 >> 0x10));
        return 0;
      }
      if (param_2 == 0x110) {
        piVar1 = *(int **)((int)this + 0x2c);
        *(HWND *)((int)this + 0x14) = param_1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x18))(piVar1,param_1,0x7fbc);
        }
        (**(code **)(*(int *)this + 0x50))();
        (**(code **)(*(int *)this + 0x54))(0);
        FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_3,(int *)&stack0x00000000,2);
        DAT_5cc982cc = 0;
        iVar3 = FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_2,(int *)&stack0x00000000,2);
        if (-1 < iVar3) {
          DAT_5cc982cc = unaff_retaddr & 0xff;
        }
        if ((param_3 == 0) || ((int)DAT_5cc982cc < 1)) {
          FUN_5cc4bfe0();
        }
        FUN_5cc7bb20(DAT_5cc982c8,(int *)&stack0x00000000,(int *)&param_3,2);
        DAT_5cc982c4 = (HWND)unaff_retaddr;
        if (((DAT_5cc982d0 == 0) && (unaff_retaddr != 0xffffffff)) &&
           (*(int *)((int)DAT_5cc982c8 + 0x680) == 0)) {
          PostMessageA(*(HWND *)((int)this + 0x14),0x632,0,0);
        }
        return 1;
      }
    }
  }
  else if (param_2 < 0x615) {
    if (param_2 == 0x614) {
      bVar7 = DAT_5cc982c0 == 0;
      FUN_5cc31ce0(param_1);
      piVar1 = *(int **)((int)this + 0x2c);
      bVar8 = DAT_5cc982c0 == 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(piVar1,bVar8);
        (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(*(int **)((int)this + 0x2c),0);
      }
      if ((!bVar8) && (bVar7)) {
        FUN_5cc3f1b0(*(HWND *)((int)this + 0x14),2);
        return 0;
      }
    }
    else {
      if (param_2 == 0x114) {
        if (*(int *)((int)this + 0x2c) != 0) {
          iVar3 = GetDlgCtrlID(param_4);
          if (iVar3 == 0xfa3) {
            uVar5 = FUN_5cc59330(0x114,param_3,pHVar2,1,1);
            (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(*(int **)((int)this + 0x2c),uVar5);
          }
          (**(code **)(*(int *)this + 0x54))(iVar3);
        }
        return 1;
      }
      if (param_2 == 0x115) {
        if (*(int *)((int)this + 0x2c) != 0) {
          iVar3 = GetDlgCtrlID(param_4);
          (**(code **)(*(int *)this + 0x54))(iVar3);
        }
        return 1;
      }
    }
  }
  else if (param_2 == 0x632) {
    bVar7 = DAT_5cc982c0 == 0;
    FUN_5cc4bd20((undefined2 *)&param_1);
    FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_4,(int *)&param_2,1);
    pHVar2 = param_4;
    DAT_5cc982cc = 0;
    iVar3 = FUN_5cc7bb20(DAT_5cc982c8,(int *)&local_4,(int *)&param_3,1);
    if (-1 < iVar3) {
      DAT_5cc982cc = param_3 & 0xff;
    }
    if ((pHVar2 == (HWND)0x0) || (uVar4 = 1, (int)DAT_5cc982cc < 1)) {
      uVar4 = FUN_5cc4bfe0();
    }
    DAT_5cc982c0 = uVar4;
    FUN_5cc7bb20(DAT_5cc982c8,(int *)&param_4,(int *)&param_3,1);
    DAT_5cc982c4 = param_4;
    piVar1 = *(int **)((int)this + 0x2c);
    bVar8 = DAT_5cc982c0 == 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))(piVar1,bVar8);
      (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(*(int **)((int)this + 0x2c),0);
    }
    if ((!bVar8) && (bVar7)) {
      FUN_5cc3f1b0(*(HWND *)((int)this + 0x14),2);
    }
  }
  return 0;
}


