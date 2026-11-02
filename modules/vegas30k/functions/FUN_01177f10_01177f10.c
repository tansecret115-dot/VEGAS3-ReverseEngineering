/* Module: vegas30k.dll
   Function: FUN_01177f10
   Address: 01177f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01177f10(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *(uint *)(param_1 + 0x188) = param_2;
  *(int *)(param_1 + 0x18c) = param_3;
  if ((*(int *)(param_1 + 0x1f0) != 0) && (*(int *)(param_1 + 100) == 0)) {
    if (*(int *)(param_1 + 0xfc) != 0) {
      uVar5 = *(uint *)(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0xdc);
      uVar3 = uVar5 + *(uint *)(param_1 + 0xe8);
      iVar4 = iVar2 + *(int *)(param_1 + 0xec) + (uint)CARRY4(uVar5,*(uint *)(param_1 + 0xe8));
      if (((*(int *)(param_1 + 0x194) <= iVar4) &&
          ((((*(int *)(param_1 + 0x194) < iVar4 || (*(uint *)(param_1 + 400) <= uVar3)) &&
            (*(uint *)(param_1 + 0x110) < *(uint *)(param_1 + 0xf8))) && (iVar2 <= param_3)))) &&
         ((iVar2 < param_3 || (uVar5 <= param_2)))) {
        if ((param_3 < iVar4) ||
           (((param_3 <= iVar4 && (param_2 < uVar3)) ||
            ((iVar1 = *(int *)(param_1 + 0xec), iVar1 < 0 ||
             ((iVar1 < 1 && (*(int *)(param_1 + 0xe8) == 0)))))))) {
          uVar6 = __allrem(param_2,param_3,uVar3,iVar4);
          *(undefined8 *)(param_1 + 0x188) = uVar6;
        }
        else {
          *(uint *)(param_1 + 0x188) = param_2 - uVar5;
          iVar4 = (param_3 - iVar2) - (uint)(param_2 < uVar5);
          *(int *)(param_1 + 0x18c) = iVar4;
          uVar6 = __allrem(*(undefined4 *)(param_1 + 0x188),iVar4,*(undefined4 *)(param_1 + 0xe8),
                           iVar1);
          *(undefined8 *)(param_1 + 0x188) = uVar6;
          uVar3 = *(uint *)(param_1 + 0x188);
          *(uint *)(param_1 + 0x188) = uVar3 + uVar5;
          *(uint *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + iVar2 + (uint)CARRY4(uVar3,uVar5)
          ;
          *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
          iVar1 = FUN_01177970(0);
          iVar2 = *(int *)(param_1 + 0x194);
          uVar5 = *(uint *)(param_1 + 0x188);
          uVar3 = *(uint *)(param_1 + 400);
          iVar4 = *(int *)(param_1 + 0x18c);
          *(int *)(param_1 + 0x1a0) = iVar1;
          if ((iVar4 < iVar2) || ((iVar4 <= iVar2 && (uVar5 < uVar3)))) {
            iVar2 = __alldiv(uVar5,iVar4,10000,0);
            *(undefined4 *)(param_1 + 400) = 0;
            *(int *)(param_1 + 0x1a0) = iVar1 - iVar2;
            *(undefined4 *)(param_1 + 0x194) = 0;
          }
          else {
            iVar2 = __alldiv(uVar5 - uVar3,(iVar4 - iVar2) - (uint)(uVar5 < uVar3),10000,0);
            *(int *)(param_1 + 0x1a0) = iVar1 - iVar2;
          }
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x18c);
    iVar4 = *(int *)(param_1 + 0x19c);
    uVar5 = *(uint *)(param_1 + 0x188);
    if ((iVar4 < iVar2) || ((iVar4 <= iVar2 && (*(uint *)(param_1 + 0x198) <= uVar5)))) {
      iVar2 = iVar4;
      uVar5 = *(uint *)(param_1 + 0x198);
    }
    *(uint *)(param_1 + 0x188) = uVar5;
    *(int *)(param_1 + 0x18c) = iVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


