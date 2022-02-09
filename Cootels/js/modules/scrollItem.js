const scrollItem = ({
                      selectorBtnList,
                      selectorBtn,
                      selectorActive,
                      classActive,
                      selectorContent,
                      classHidden
}) =>{
  const btnList = document.querySelector(selectorBtnList)
  const btn = document.querySelector(selectorBtn);

  btnList.addEventListener('click', event => {
    if(event.target.classList.contains(btn.className)){
      const pointActive = event.target.closest(selectorActive);
      pointActive.classList.toggle(classActive);
      const text = pointActive.querySelector(selectorContent);
      text.classList.toggle(classHidden);
    }
  })  
}

export default scrollItem;