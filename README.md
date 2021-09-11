# Medicine16

Medicine16 project build a clinic management.

## I. Cài đặt GitHub Desktop

### 1. macOS và Windows

Download tại: [https://desktop.github.com/](https://desktop.github.com/)

### 2. Linux

Download tại: [https://github.com/shiftkey/desktop/releases/](https://github.com/shiftkey/desktop/releases/)

## II. Cài đặt Visual Studio Code (Code Editor)

Download tại: [https://code.visualstudio.com/](https://code.visualstudio.com/)

#### a) Cài đặt tiện tích cho Draw.io

Download tại: [https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio](https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio)

#### b) Cài đặt tiện tích cho PDF

Download tại: [https://marketplace.visualstudio.com/items?itemName=tomoki1207.pdf](https://marketplace.visualstudio.com/items?itemName=tomoki1207.pdf)

#### c) Cài đặt tiện tích cho Office

Download tại: [https://marketplace.visualstudio.com/items?itemName=cweijan.vscode-office](https://marketplace.visualstudio.com/items?itemName=cweijan.vscode-office)

#### d) Cài đặt tiện tích cho Git

Download tại: [https://marketplace.visualstudio.com/items?itemName=donjayamanne.githistory](https://marketplace.visualstudio.com/items?itemName=donjayamanne.githistory)

## III. Cài đặt và thiết lập Git

Download tại: [https://git-scm.com/](https://git-scm.com/)

#### Bước 1: Mở Git bash hoặc Terminal để thiết lập git bằng cách sao chép rồi dán vào VSCode và điền thông tin vào đoạn lệnh sau:

```shell
git config --global user.name "Ho Va Ten"
git config --global user.email "username@email.com"

ssh-keygen -t ed25519 -C "username@email.com"

eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
cat ~/.ssh/id_ed25519.pub
```

#### Bước 2: Copy dòng tương tự như vầy:

`ssh-ed25519 ... username@email.com`

#### Bước 3: Thêm SSH keys vào tài khoản của bạn:

Vào trang: [https://github.com/settings/keys](https://github.com/settings/keys) . Sau đó nhấn vào nút `New SSH key` rồi dán vào `Key` rồi đặt tiêu đề. Cuối cùng nhấn vào `Add SSH key`.
