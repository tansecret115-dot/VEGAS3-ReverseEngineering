/* Module: pngu3266.dll
   Function: ShowMenu
   Address: 60600182
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenuButton::ShowMenu(void) */

void __thiscall CPNMenuButton::ShowMenu(CPNMenuButton *this)

{
  BOOL BVar1;
  int iVar2;
  CPNEvent local_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  DWORD local_44;
  BOOL local_38;
  RECT local_2c;
  int local_1c;
  LONG local_18;
  LONG local_14;
  int local_10;
  LONG local_c;
  int local_8;
  
                    /* 0x10182  2064  ?ShowMenu@CPNMenuButton@@UAEXXZ */
  (**(code **)(*(int *)this + 0x38))(&local_c);
  local_10 = local_8;
  local_14 = local_c;
  local_1c = 0;
  local_18 = 0;
  (**(code **)(*(int *)this + 0x5c))(&local_1c);
  local_2c.right = local_14;
  local_2c.top = local_18;
  local_2c.left = local_1c;
  local_2c.bottom = local_10;
  BVar1 = TrackPopupMenu(*(HMENU *)(*(int *)(this + 0xc0) + 0x14),0x100,local_1c + -1,local_10,0,
                         *(HWND *)(this + 0xc),&local_2c);
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(this + 0xc0) + 0x2c))(BVar1);
    if ((BVar1 != -1) && (iVar2 != -1)) {
      *(int *)(this + 0xd8) = iVar2;
      (**(code **)(*(int *)this + 0x78))(0,1);
    }
  }
  if (BVar1 != 0) {
    CPNEvent::CPNEvent(local_58,0,0,(CPNRouter *)0x0,0,0,0,0);
    local_50 = 0x80000000;
    local_4c = 2;
    local_44 = GetTickCount();
    local_38 = BVar1;
    (**(code **)(*(int *)this + 4))(local_58);
    CPNEvent::~CPNEvent(local_58);
  }
  return;
}


